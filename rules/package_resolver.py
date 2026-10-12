"""Versioned rules-package resolution for the initial platform foundation."""

from __future__ import annotations

from copy import deepcopy
from dataclasses import dataclass
from typing import Any


class PackageResolutionError(ValueError):
    """Raised when a package graph or composition operation is invalid."""


@dataclass(frozen=True)
class Package:
    package_id: str
    version: str
    dependencies: dict[str, str]
    definitions: dict[str, dict[str, Any]]
    operations: list[dict[str, Any]]


def _version_key(version: str) -> tuple[int, ...]:
    try:
        return tuple(int(part) for part in version.split("."))
    except ValueError as error:
        raise PackageResolutionError(f"Invalid package version: {version}") from error


def _satisfies(actual: str, requirement: str) -> bool:
    if requirement.startswith(">="):
        return _version_key(actual) >= _version_key(requirement[2:])
    return actual == requirement


class PackageResolver:
    def __init__(self, packages: list[Package]) -> None:
        self._packages = {
            (package.package_id, package.version): package for package in packages
        }

    def resolve(
        self,
        requested: list[tuple[str, str]],
    ) -> dict[str, dict[str, Any]]:
        definitions, _ = self.resolve_with_versions(requested)
        return definitions

    def resolve_with_versions(
        self,
        requested: list[tuple[str, str]],
    ) -> tuple[dict[str, dict[str, Any]], dict[str, str]]:
        selected: dict[str, Package] = {}
        visiting: set[str] = set()

        def visit(package_id: str, version: str) -> None:
            if package_id in visiting:
                raise PackageResolutionError(
                    f"Circular package dependency detected at {package_id}"
                )
            package = self._packages.get((package_id, version))
            if package is None:
                raise PackageResolutionError(
                    f"Package {package_id}@{version} is unavailable"
                )
            existing = selected.get(package_id)
            if existing is not None:
                if existing.version != version:
                    raise PackageResolutionError(
                        f"Conflicting versions for {package_id}: "
                        f"{existing.version} and {version}"
                    )
                return
            visiting.add(package_id)
            for dependency_id, requirement in package.dependencies.items():
                dependency = self._find_dependency(dependency_id, requirement)
                visit(dependency.package_id, dependency.version)
            visiting.remove(package_id)
            selected[package_id] = package

        for package_id, version in requested:
            visit(package_id, version)

        resolved: dict[str, dict[str, Any]] = {}
        for package in selected.values():
            for definition_id, definition in package.definitions.items():
                resolved[definition_id] = {
                    **deepcopy(definition),
                    "_source": {
                        "package_id": package.package_id,
                        "package_version": package.version,
                    },
                }

        ordered = sorted(selected.values(), key=lambda package: package.package_id)
        for package in ordered:
            for operation in package.operations:
                self._apply_operation(resolved, operation, package)
        versions = {
            package.package_id: package.version for package in selected.values()
        }
        return resolved, versions

    def _find_dependency(self, package_id: str, requirement: str) -> Package:
        candidates = [
            package
            for (candidate_id, _), package in self._packages.items()
            if candidate_id == package_id and _satisfies(package.version, requirement)
        ]
        if not candidates:
            raise PackageResolutionError(
                f"Dependency {package_id} {requirement} is unavailable"
            )
        return max(candidates, key=lambda package: _version_key(package.version))

    @staticmethod
    def _apply_operation(
        definitions: dict[str, dict[str, Any]],
        operation: dict[str, Any],
        package: Package,
    ) -> None:
        action = operation.get("action")
        definition_id = operation.get("definition_id")
        if not isinstance(definition_id, str):
            raise PackageResolutionError(
                f"Package {package.package_id}@{package.version} has an invalid operation"
            )
        if action == "add":
            if definition_id in definitions:
                raise PackageResolutionError(f"Definition already exists: {definition_id}")
            definitions[definition_id] = {
                **deepcopy(operation["definition"]),
                "_source": {
                    "package_id": package.package_id,
                    "package_version": package.version,
                },
            }
        elif action == "replace":
            if definition_id not in definitions:
                raise PackageResolutionError(f"Cannot replace missing definition: {definition_id}")
            definitions[definition_id] = {
                **deepcopy(operation["definition"]),
                "_source": {
                    "package_id": package.package_id,
                    "package_version": package.version,
                },
            }
        elif action == "patch":
            if definition_id not in definitions:
                raise PackageResolutionError(f"Cannot patch missing definition: {definition_id}")
            definitions[definition_id].update(deepcopy(operation["changes"]))
            definitions[definition_id]["_source"] = {
                "package_id": package.package_id,
                "package_version": package.version,
            }
        elif action == "disable":
            if definition_id not in definitions:
                raise PackageResolutionError(f"Cannot disable missing definition: {definition_id}")
            definitions[definition_id]["_disabled"] = True
        elif action == "alias":
            target_id = operation.get("target_id")
            if target_id not in definitions:
                raise PackageResolutionError(f"Cannot alias missing definition: {target_id}")
            definitions[definition_id] = {
                **deepcopy(definitions[target_id]),
                "_alias_of": target_id,
                "_source": {
                    "package_id": package.package_id,
                    "package_version": package.version,
                },
            }
        else:
            raise PackageResolutionError(f"Unsupported package operation: {action}")
