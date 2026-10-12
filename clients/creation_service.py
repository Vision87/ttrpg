"""Local JSON application service for package-driven character creation."""

from __future__ import annotations

import json
import uuid
from copy import deepcopy
from pathlib import Path
from typing import Any
from urllib.parse import unquote, urlsplit

from assets.registry import AssetRegistry, AssetRevision
from character.model import Character
from character.store import (
    CharacterStore,
    PackageVersionUnavailableError,
)
from character.templates import CharacterTemplate
from character.workflow import CreationWorkflow
from rules.package_resolver import (
    Package,
    PackageResolutionError,
    PackageResolver,
)
from rules.schema import (
    DefinitionValidationError,
    validate_creation_flow_references,
    validate_ruleset_package,
)
from rules.theme import resolve_theme_profile
from session.runtime import Controller, Session


class CharacterCreationApplication:
    def __init__(self, project_root: Path, data_directory: Path) -> None:
        self.project_root = project_root
        self.store = CharacterStore(data_directory)
        self.asset_registry = AssetRegistry()
        self.asset_registry.register(
            AssetRevision(
                "theme.cinzel",
                1,
                "font",
                frozenset({"display", "cinzel"}),
                frozenset({"ui"}),
                "Unity Resources: theme.cinzel",
            )
        )
        self.asset_registry.register(
            AssetRevision(
                "theme.medievalsharp",
                1,
                "font",
                frozenset({"display", "medievalsharp"}),
                frozenset({"ui"}),
                "Unity Resources: theme.medievalsharp",
            )
        )
        for asset_id, tags, resource in (
            (
                "theme.dnd35.wood",
                frozenset({"theme", "wood", "ui"}),
                "theme.dnd35.wood",
            ),
            (
                "theme.dnd35.metal",
                frozenset({"theme", "metal", "ui"}),
                "theme.dnd35.metal",
            ),
            (
                "theme.dnd35.wood-active",
                frozenset({"theme", "wood", "ui", "active"}),
                "theme.dnd35.wood-active",
            ),
            (
                "theme.dnd35.wood-hover",
                frozenset({"theme", "wood", "ui", "hover"}),
                "theme.dnd35.wood-hover",
            ),
            (
                "theme.dnd35.frame",
                frozenset({"theme", "wood", "metal", "frame", "ui"}),
                "theme.dnd35.frame",
            ),
        ):
            self.asset_registry.register(
                AssetRevision(
                    asset_id,
                    1,
                    "texture",
                    tags,
                    frozenset({"ui"}),
                    f"Unity Resources: {resource}",
                )
            )
        self.manifests: dict[tuple[str, str], dict[str, Any]] = {}
        packages: list[Package] = []
        for package_path in sorted((project_root / "content").glob("*/package.json")):
            manifest: dict[str, Any] = json.loads(package_path.read_text())
            validate_ruleset_package(manifest)
            package_id = manifest.get("id", manifest.get("package_id"))
            package_version = manifest["version"]
            key = (package_id, package_version)
            if key in self.manifests:
                raise ValueError(
                    f"Duplicate rules package found: {package_id}@{package_version}"
                )
            self.manifests[key] = manifest
            packages.append(
                Package(
                    package_id=package_id,
                    version=package_version,
                    dependencies=manifest.get("dependencies", {}),
                    definitions=manifest.get("definitions", {}),
                    operations=manifest.get("operations", []),
                )
            )
        self.resolver = PackageResolver(packages)

    def handle(
        self,
        method: str,
        path: str,
        payload: dict[str, Any] | None = None,
    ) -> tuple[int, dict[str, Any]]:
        route = unquote(urlsplit(path).path)
        body = payload or {}
        try:
            return self._dispatch(method.upper(), route, body)
        except FileNotFoundError:
            return self._error(404, "not-found", "The requested record was not found")
        except PackageVersionUnavailableError as error:
            return self._error(409, "package-version-unavailable", str(error))
        except (DefinitionValidationError, PackageResolutionError, ValueError) as error:
            return self._error(400, "invalid-request", str(error))

    def _dispatch(
        self, method: str, route: str, body: dict[str, Any]
    ) -> tuple[int, dict[str, Any]]:
        if route == "/api/rulesets" and method == "GET":
            return 200, {"rulesets": self.list_rulesets()}
        if route.startswith("/api/rulesets/") and route.endswith("/flow") and method == "GET":
            package_id = route.removeprefix("/api/rulesets/").removesuffix("/flow").strip("/")
            manifest, versions, definitions = self._resolve_ruleset(package_id)
            return 200, self._flow_payload(manifest, versions, definitions)
        if route == "/api/drafts" and method == "GET":
            return 200, {"drafts": self.store.list_drafts()}
        if route == "/api/drafts" and method == "POST":
            workflow = self._create_draft(body)
            self.store.save_draft(workflow)
            return 201, self._draft_payload(workflow)

        draft_prefix = "/api/drafts/"
        if route.startswith(draft_prefix):
            suffix = route.removeprefix(draft_prefix).split("/")
            draft_id = suffix[0]
            workflow = self._load_workflow(draft_id)
            if len(suffix) == 1 and method == "GET":
                return 200, self._draft_payload(workflow)
            if len(suffix) == 1 and method == "PUT":
                workflow.set_field(body.get("field_id"), body.get("value"))
                self.store.save_draft(workflow)
                return 200, self._draft_payload(workflow)
            if len(suffix) == 2 and suffix[1] == "roll" and method == "POST":
                if set(body) != {"field_id"}:
                    raise ValueError("Roll requests accept only field_id")
                field_id = body.get("field_id")
                if not isinstance(field_id, str):
                    raise ValueError("field_id must be a string")
                workflow.roll_field(field_id)
                self.store.save_draft(workflow)
                return 200, self._draft_payload(workflow)
            if len(suffix) == 2 and suffix[1] == "roll-group" and method == "POST":
                if set(body) != {"group_id"}:
                    raise ValueError("Group roll requests accept only group_id")
                group_id = body.get("group_id")
                if not isinstance(group_id, str):
                    raise ValueError("group_id must be a string")
                workflow.roll_group(group_id)
                self.store.save_draft(workflow)
                return 200, self._draft_payload(workflow)
            if len(suffix) == 2 and suffix[1] == "advance" and method == "POST":
                workflow.advance_step()
                self.store.save_draft(workflow)
                return 200, self._draft_payload(workflow)
            if len(suffix) == 2 and suffix[1] == "review" and method == "POST":
                return 200, workflow.review()
            if len(suffix) == 2 and suffix[1] == "finalize" and method == "POST":
                character = workflow.finalize()
                self.store.save_character(character)
                return 200, {"character": character.to_record()}
            return self._error(404, "not-found", "Unknown draft operation")

        character_prefix = "/api/characters/"
        if route.startswith(character_prefix) and route.endswith("/start") and method == "POST":
            character_id = route.removeprefix(character_prefix).removesuffix("/start").strip("/")
            return 200, self._start_character(character_id)
        return self._error(404, "not-found", "Unknown API route")

    def list_rulesets(self) -> list[dict[str, Any]]:
        latest: dict[str, dict[str, Any]] = {}
        for (package_id, version), manifest in self.manifests.items():
            current = latest.get(package_id)
            if current is None or self._version_key(version) > self._version_key(
                current["version"]
            ):
                latest[package_id] = manifest
        available = []
        for package_id, manifest in sorted(latest.items()):
            flow = manifest.get("creation_flow")
            if flow is None:
                continue
            resolved_flow = self._flow_payload_for_manifest(manifest)
            available.append(
                {
                    "id": package_id,
                    "version": manifest["version"],
                    "name": manifest.get("name", package_id),
                    "theme": resolved_flow["theme"],
                    "templates": resolved_flow["templates"],
                }
            )
        return available

    def _flow_payload_for_manifest(self, manifest: dict[str, Any]) -> dict[str, Any]:
        package_id = manifest.get("id", manifest.get("package_id"))
        resolved_manifest, versions, definitions = self._resolve_ruleset(package_id)
        return self._flow_payload(resolved_manifest, versions, definitions)

    def _flow_payload(
        self,
        manifest: dict[str, Any],
        versions: dict[str, str],
        definitions: dict[str, dict[str, Any]],
    ) -> dict[str, Any]:
        flow = deepcopy(manifest["creation_flow"])
        feat_descriptions = manifest.get("feat_descriptions", {})
        for step in flow["steps"]:
            for field_data in step["fields"]:
                if field_data["type"] != "choice":
                    continue
                definition_type = field_data["definition_type"]
                field_data["options"] = [
                    {
                        "id": definition_id,
                        "label": definition.get("name", definition_id),
                        "parent_id": definition.get(
                            "parent_race",
                            definition.get("parent_class", ""),
                        ),
                        "detail": self._skill_option_detail(definition)
                        if definition_type == "skill"
                        else "",
                        "description": feat_descriptions.get(definition_id, "")
                        if definition_type == "feat"
                        else "",
                        "trained_only": definition.get("trained_only", False),
                        "prerequisites": deepcopy(
                            definition.get("prerequisites", [])
                        ),
                    }
                    for definition_id, definition in sorted(definitions.items())
                    if definition.get("type") == definition_type
                    and not definition.get("_disabled", False)
                ]
        templates = [
            {
                "id": definition_id,
                "name": definition.get("name", definition_id),
            }
            for definition_id, definition in sorted(definitions.items())
            if definition.get("type") == "template"
        ]
        theme = resolve_theme_profile(
            manifest.get("theme"),
            self.asset_registry,
        )
        return {
            "ruleset_id": manifest.get("id", manifest.get("package_id")),
            "package_versions": versions,
            "creation_flow": flow,
            "templates": templates,
            "theme": self._theme_payload(theme),
        }

    def _create_draft(self, body: dict[str, Any]) -> CreationWorkflow:
        package_id = body.get("ruleset_id")
        name = body.get("name")
        policy = body.get("policy", "guided")
        if not isinstance(package_id, str) or not isinstance(name, str) or not name.strip():
            raise ValueError("ruleset_id and a non-empty name are required")
        if len(name) > 80:
            raise ValueError("Character name must contain at most 80 characters")
        if policy not in {"guided", "strict", "homebrew"}:
            raise ValueError("policy must be guided, strict, or homebrew")
        manifest, versions, definitions = self._resolve_ruleset(package_id)
        draft_id = uuid.uuid4().hex
        template_id = body.get("template_id") or None
        if template_id is None:
            return CreationWorkflow(
                draft_id,
                name,
                package_id,
                definitions,
                policy,
                creation_flow=manifest["creation_flow"],
                package_versions=versions,
            )
        template_definition = definitions.get(template_id)
        if (
            template_definition is None
            or template_definition.get("type") != "template"
            or template_definition.get("_disabled", False)
        ):
            raise ValueError(f"Unavailable character template: {template_id}")
        template = CharacterTemplate(
            template_id=template_id,
            name=template_definition.get("name", template_id),
            package_versions=versions,
            defaults=deepcopy(template_definition.get("creation_defaults", {})),
            recommendations=deepcopy(
                template_definition.get("recommendations", {})
            ),
            ruleset_id=package_id,
        )
        return CreationWorkflow.from_template(
            draft_id,
            name,
            package_id,
            template,
            definitions,
            manifest["creation_flow"],
            policy,
        )

    def _load_workflow(self, draft_id: str) -> CreationWorkflow:
        record = self.store.load_draft_record(draft_id)
        requested_versions = record.get("package_versions", {})
        self.store.ensure_package_versions(
            requested_versions,
            self._available_versions(requested_versions),
        )
        manifest, versions, definitions = self._resolve_ruleset(
            record["ruleset_id"],
            pinned_versions=requested_versions,
        )
        if versions != record["package_versions"]:
            raise PackageVersionUnavailableError(
                "Draft package versions do not match the installed ruleset packages"
            )
        return CreationWorkflow.from_draft_record(
            record,
            ruleset_definitions=definitions,
            creation_flow=manifest["creation_flow"],
            package_versions=versions,
        )

    def _available_versions(self, requested: dict[str, str]) -> dict[str, str]:
        available: dict[str, str] = {}
        for package_id, version in requested.items():
            if (package_id, version) in self.manifests:
                available[package_id] = version
        return available

    def _resolve_ruleset(
        self,
        package_id: str,
        *,
        pinned_versions: dict[str, str] | None = None,
    ) -> tuple[dict[str, Any], dict[str, str], dict[str, dict[str, Any]]]:
        if pinned_versions is None:
            candidates = [
                (version, manifest)
                for (candidate_id, version), manifest in self.manifests.items()
                if candidate_id == package_id
            ]
            if not candidates:
                raise ValueError(f"Ruleset package is not installed: {package_id}")
            version, manifest = max(
                candidates,
                key=lambda item: self._version_key(item[0]),
            )
            requested = [(package_id, version)]
        else:
            version = pinned_versions.get(package_id, "")
            manifest = self.manifests.get((package_id, version))
            if manifest is None:
                raise PackageVersionUnavailableError(
                    f"Required package version unavailable: {package_id}@{version}"
                )
            requested = list(pinned_versions.items())
        try:
            definitions, versions = self.resolver.resolve_with_versions(requested)
        except PackageResolutionError as error:
            if pinned_versions is not None:
                raise PackageVersionUnavailableError(str(error)) from error
            raise
        if manifest.get("creation_flow") is None:
            raise ValueError(f"Ruleset package does not provide character creation: {package_id}")
        validate_creation_flow_references(manifest["creation_flow"], definitions)
        return manifest, versions, definitions

    def _draft_payload(self, workflow: CreationWorkflow) -> dict[str, Any]:
        record = workflow.to_draft_record()
        manifest, versions, definitions = self._resolve_ruleset(
            workflow.ruleset_id
        )
        flow_payload = self._flow_payload(manifest, versions, definitions)
        field_values: list[dict[str, Any]] = []
        character = workflow.builder.character
        presentation = workflow.presentation.to_record()
        for step in manifest["creation_flow"]["steps"]:
            for field_data in step["fields"]:
                value: dict[str, Any] = {"field_id": field_data["id"]}
                if field_data["type"] == "number":
                    value["number_value"] = character.abilities.get(
                        field_data["attribute"], 0
                    )
                    value["is_number"] = field_data["attribute"] in character.abilities
                    history = workflow.ability_rolls.get(field_data["id"], [])
                    if history:
                        value["roll_dice"] = history[-1]["dice"]
                        value["roll_dropped"] = history[-1]["dropped"]
                        value["roll_score"] = history[-1]["score"]
                        value["roll_count"] = len(history)
                elif field_data["type"] == "choice":
                    value["selected_values"] = character.choices.get(
                        field_data["category"], []
                    )
                    if field_data.get("skill_selection") == "ranks":
                        value["skill_allocation"] = workflow.skill_allocation(
                            field_data
                        )
                elif field_data["type"] == "text":
                    value["text_value"] = character.name
                elif field_data["type"] == "presentation":
                    value["text_value"] = presentation.get(field_data["slot"])
                    if field_data["slot"] == "scale":
                        value["number_value"] = presentation.get("scale", 1.0)
                        value["is_number"] = True
                field_values.append(value)
        return {
            "draft": record,
            "current_step": workflow.current_step,
            "field_values": field_values,
            "review": workflow.review(),
            "theme": flow_payload["theme"],
        }

    def _start_character(self, character_id: str) -> dict[str, Any]:
        record = self.store.load_character_record(character_id)
        required_versions = record.get("package_versions", {})
        available_versions = self._available_versions(required_versions)
        self.store.ensure_package_versions(required_versions, available_versions)
        character = self.store.load_character(
            character_id,
            available_package_versions=available_versions,
        )

        fixture_path = (
            self.project_root
            / "UnityClient"
            / "Assets"
            / "StreamingAssets"
            / "session-fixture.json"
        )
        fixture = json.loads(fixture_path.read_text())
        starter_snapshot = fixture.get("snapshot", {})
        starter_entities = starter_snapshot.get("entities", [])
        player = next(
            (entity for entity in starter_entities if entity.get("kind") == "character"),
            None,
        )
        if player is None:
            raise ValueError("Starter session has no player spawn entity")
        position = deepcopy(player.get("position", {"x": 0, "y": 0, "z": 0}))
        entities = {
            entity["id"]: deepcopy(entity)
            for entity in starter_entities
            if entity.get("id") != player.get("id")
        }
        hit_points = character.derived.get(
            "hit_points", character.derived.get("wounds", {})
        ).get("value", player.get("hit_points", 1))
        entities[character.character_id] = {
            "id": character.character_id,
            "kind": "character",
            "name": character.name,
            "position": position,
            "hit_points": hit_points,
            "presentation": deepcopy(character.presentation),
        }
        session_id = f"solo-{uuid.uuid4().hex}"
        session = Session(
            session_id,
            entities,
            events=deepcopy(fixture.get("events", [])),
            tiles=deepcopy(starter_snapshot.get("tiles", {})),
        )
        controller_id = "local-human"
        session.assign(Controller(controller_id, "human", {character.character_id}))
        snapshot = session.get_client_snapshot(controller_id)
        package_id = character.ruleset_id or next(
            (
                candidate_id
                for candidate_id in character.package_versions
                if self.manifests.get(
                    (
                        candidate_id,
                        character.package_versions[candidate_id],
                    ),
                    {},
                ).get("theme")
            ),
            next(iter(character.package_versions), ""),
        )
        manifest = self.manifests.get(
            (package_id, character.package_versions.get(package_id, ""))
        )
        theme = resolve_theme_profile(
            manifest.get("theme") if manifest else None,
            self.asset_registry,
        )
        serialized_snapshot = {
            "session_id": snapshot["session_id"],
            "entities": list(snapshot["entities"].values()),
            "tilemap": deepcopy(starter_snapshot.get("tilemap")),
            "controller_id": controller_id,
            "role": snapshot["role"],
        }
        return {
            "snapshot": serialized_snapshot,
            "events": deepcopy(fixture.get("events", [])),
            "theme": self._theme_payload(theme),
        }

    @staticmethod
    def _skill_option_detail(definition: dict[str, Any]) -> str:
        ability = definition.get("ability")
        if ability:
            detail = ability.replace("_", " ").title()
        else:
            characteristic = definition.get("characteristic", "")
            detail = (
                characteristic.removeprefix("characteristic_")
                .removeprefix("characteristic.")
                .replace("_", " ")
                .title()
                if characteristic
                else "Specialty"
            )
        if definition.get("language_skill"):
            detail = "One point per language"
        elif definition.get("trained_only"):
            detail += " · Trained only"
        return detail

    @staticmethod
    def _theme_payload(theme: dict[str, Any]) -> dict[str, Any]:
        return {
            "tokens": dict(theme.get("tokens", {})),
            "assets": [
                {"slot": slot, "asset": asset}
                for slot, asset in sorted(theme.get("assets", {}).items())
            ],
            "diagnostics": list(theme.get("diagnostics", [])),
        }

    @staticmethod
    def _version_key(version: str) -> tuple[int, ...]:
        try:
            return tuple(int(part) for part in version.split("."))
        except ValueError as error:
            raise ValueError(f"Invalid package version: {version}") from error

    @staticmethod
    def _error(status: int, code: str, message: str) -> tuple[int, dict[str, Any]]:
        return status, {"error": {"code": code, "message": message}}
