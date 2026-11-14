"""Renderer-independent character presentation profile."""

from __future__ import annotations

from dataclasses import dataclass, field
from typing import Any


DEFAULT_BASE_SLICES: dict[str, str] = {
    "head": "head_base",
    "hair": "hair_short",
    "torso": "torso_base",
    "legs": "legs_base",
    "hands": "hands_base",
    "feet": "feet_base",
}

RACE_APPEARANCE_COLOR_OPTIONS: dict[str, dict[str, list[str]]] = {
    "race.dwarf": {
        "skin": ["#E1AF8C", "#C89673", "#AF7D5A", "#A66B47", "#69412D"],
        "hair": ["#F0DC8C", "#DCA05A", "#C89643", "#B45A28", "#502D19", "#432B1E", "#AFAFB5"],
        "iris": ["#604E41", "#735B37", "#436B4D", "#3C3030"],
    },
    "race.dwarf.hill": {
        "skin": ["#E1AF8C", "#C89673", "#A66B47", "#69412D"],
        "hair": ["#DCA05A", "#C89643", "#B45A28", "#502D19", "#432B1E"],
        "iris": ["#604E41", "#735B37", "#436B4D"],
    },
    "race.dwarf.mountain": {
        "skin": ["#F0C8AA", "#AF7D5A", "#A66B47", "#69412D"],
        "hair": ["#DCA05A", "#C89643", "#502D19", "#432B1E", "#AFAFB5"],
        "iris": ["#604E41", "#735B37", "#426A9D"],
    },
    "race.dwarf.duergar": {
        "skin": ["#A5A9B2", "#858B97", "#68717F", "#4A515F"],
        "hair": ["#AFAFB5", "#8D8F98", "#3A2824", "#432B1E"],
        "iris": ["#67688E", "#3C3030", "#426A9D", "#604E41"],
    },
    "race.elf": {
        "skin": ["#FADCC3", "#F0C8AA", "#E7C7A1", "#C89673", "#69412D"],
        "hair": ["#F0DC8C", "#DCA05A", "#B45A28", "#502D19", "#432B1E", "#AFAFB5", "#8D8F98", "#503070"],
        "iris": ["#436B4D", "#426A9D", "#67688E", "#604E41", "#78614A"],
    },
    "race.elf.high": {
        "skin": ["#FADCC3", "#F0C8AA", "#E7C7A1"],
        "hair": ["#F0DC8C", "#DCA05A", "#AFAFB5", "#B45A28"],
        "iris": ["#426A9D", "#436B4D", "#67688E", "#604E41"],
    },
    "race.elf.gray": {
        "skin": ["#F0E8E2", "#D5D0CF", "#B6B8BC", "#8D8F98"],
        "hair": ["#AFAFB5", "#8D8F98", "#503070", "#432B1E"],
        "iris": ["#67688E", "#426A9D", "#3C3030"],
    },
    "race.elf.wild": {
        "skin": ["#E1AF8C", "#C89673", "#AF7D5A", "#69412D"],
        "hair": ["#B45A28", "#502D19", "#432B1E", "#7A4A35"],
        "iris": ["#436B4D", "#735B37", "#604E41"],
    },
    "race.elf.wood": {
        "skin": ["#F0C8AA", "#E1AF8C", "#C89673", "#AF7D5A"],
        "hair": ["#F0DC8C", "#DCA05A", "#7A4A35", "#502D19", "#432B1E"],
        "iris": ["#436B4D", "#735B37", "#604E41", "#426A9D"],
    },
    "race.elf.aquatic": {
        "skin": ["#D8E9E0", "#A9D0C9", "#78B4B3", "#4B9098"],
        "hair": ["#AFAFB5", "#8D8F98", "#503070", "#426A9D"],
        "iris": ["#426A9D", "#436B4D", "#67688E"],
    },
    "race.elf.drow": {
        "skin": ["#49302A", "#3A2824", "#35251E", "#241916"],
        "hair": ["#AFAFB5", "#8D8F98", "#3A2824", "#503070"],
        "iris": ["#67688E", "#426A9D", "#3C3030", "#436B4D"],
    },
    "race.gnome": {
        "skin": ["#FADCC3", "#F0C8AA", "#E1AF8C", "#C28E69", "#C89673"],
        "hair": ["#F0DC8C", "#DCA05A", "#B45A28", "#7A4A35", "#AFAFB5", "#503070"],
        "iris": ["#604E41", "#735B37", "#436B4D", "#426A9D", "#67688E"],
    },
    "race.gnome.rock": {
        "skin": ["#FADCC3", "#F0C8AA", "#E1AF8C", "#C89673"],
        "hair": ["#DCA05A", "#B45A28", "#7A4A35", "#502D19", "#503070"],
        "iris": ["#604E41", "#735B37", "#436B4D", "#426A9D"],
    },
    "race.gnome.deep": {
        "skin": ["#B5B8C0", "#9299A4", "#6E7683", "#4D5663"],
        "hair": ["#AFAFB5", "#8D8F98", "#503070", "#432B1E"],
        "iris": ["#67688E", "#426A9D", "#3C3030"],
    },
    "race.half-elf": {
        "skin": ["#FADCC3", "#F0C8AA", "#E1AF8C", "#D9A77E", "#C89673", "#AF7D5A"],
        "hair": ["#F0DC8C", "#DCA05A", "#B45A28", "#5B3828", "#502D19", "#432B1E", "#AFAFB5"],
        "iris": ["#604E41", "#78614A", "#436B4D", "#426A9D", "#735B37", "#67688E"],
    },
    "race.half-orc": {
        "skin": ["#73916A", "#627B62", "#AF7D5A", "#A66B47", "#69412D"],
        "hair": ["#B45A28", "#502D19", "#432B1E", "#35251E", "#3A2824"],
        "iris": ["#735B37", "#C28C37", "#A14337", "#604E41", "#3C3030"],
    },
    "race.halfling": {
        "skin": ["#F0C8AA", "#E1AF8C", "#D9A77E", "#C89673", "#AF7D5A"],
        "hair": ["#F0DC8C", "#DCA05A", "#B45A28", "#502D19", "#432B1E"],
        "iris": ["#604E41", "#78614A", "#735B37", "#436B4D"],
    },
    "race.halfling.lightfoot": {
        "skin": ["#FADCC3", "#F0C8AA", "#D9A77E", "#C89673"],
        "hair": ["#F0DC8C", "#DCA05A", "#B45A28", "#502D19"],
        "iris": ["#604E41", "#78614A", "#436B4D"],
    },
    "race.halfling.tallfellow": {
        "skin": ["#E1AF8C", "#D9A77E", "#C89673", "#AF7D5A"],
        "hair": ["#DCA05A", "#B45A28", "#502D19", "#432B1E"],
        "iris": ["#604E41", "#735B37", "#426A9D"],
    },
    "race.halfling.deep": {
        "skin": ["#C89673", "#AF7D5A", "#69412D"],
        "hair": ["#AFAFB5", "#8D8F98", "#502D19", "#432B1E"],
        "iris": ["#67688E", "#426A9D", "#3C3030"],
    },
    "race.human": {
        "skin": ["#FADCC3", "#F0C8AA", "#E1AF8C", "#D9A77E", "#C89673", "#AF7D5A", "#69412D"],
        "hair": ["#F0DC8C", "#DCA05A", "#B45A28", "#502D19", "#432B1E", "#AFAFB5", "#503070"],
        "iris": ["#604E41", "#78614A", "#436B4D", "#426A9D", "#735B37", "#67688E", "#3C3030"],
    },
}


def _normalize_race_choice_id(race_choice_id: str | None) -> str:
    normalized = (race_choice_id or "race.human").strip().lower()
    if ":" in normalized:
        normalized = normalized.rsplit(":", 1)[-1]
    normalized = normalized.replace("_", "-")
    return normalized if normalized.startswith("race.") else f"race.{normalized}"


def get_race_appearance_color_options(
    race_choice_id: str | None,
) -> dict[str, list[str]]:
    options = RACE_APPEARANCE_COLOR_OPTIONS.get(
        _normalize_race_choice_id(race_choice_id),
        {},
    )
    return {tint: list(colors) for tint, colors in options.items()}


RACE_BONE_SCALES: dict[str, dict[str, list[float]]] = {
    "human": {
        "root": [1.0, 1.0, 1.0],
        "spine": [1.0, 1.0, 1.0],
        "legs": [1.0, 1.0, 1.0],
        "head": [1.0, 1.0, 1.0],
    },
    "dwarf": {
        "root": [1.0, 1.0, 1.0],
        "spine": [1.25, 0.85, 1.25],
        "legs": [1.0, 0.75, 1.0],
        "head": [1.05, 1.05, 1.05],
        "shoulders": [1.25, 1.0, 1.0],
    },
    "halfling": {
        "root": [0.65, 0.65, 0.65],
        "spine": [1.0, 1.0, 1.0],
        "legs": [1.0, 1.0, 1.0],
        "head": [1.15, 1.15, 1.15],
    },
    "gnome": {
        "root": [0.68, 0.68, 0.68],
        "spine": [1.0, 1.0, 1.0],
        "legs": [0.95, 0.95, 0.95],
        "head": [1.12, 1.12, 1.12],
    },
    "elf": {
        "root": [1.0, 1.02, 1.0],
        "spine": [0.92, 1.02, 0.92],
        "legs": [0.95, 1.05, 0.95],
        "head": [0.95, 1.0, 0.95],
    },
    "half-elf": {
        "root": [1.0, 1.0, 1.0],
        "spine": [0.96, 1.0, 0.96],
        "legs": [0.98, 1.02, 0.98],
        "head": [1.0, 1.0, 1.0],
    },
    "half-orc": {
        "root": [1.08, 1.08, 1.08],
        "spine": [1.15, 1.05, 1.15],
        "legs": [1.05, 1.05, 1.05],
        "shoulders": [1.2, 1.0, 1.0],
        "head": [1.05, 1.05, 1.05],
    },
}

# Mapping: item id substring or exact id -> (kind, target_slot, visual_id)
# kind: "slice" (replaces body mesh part) or "socket" (attaches to bone transform)
ITEM_VISUAL_RULES: list[tuple[str, str, str, str]] = [
    # Armors -> Slices
    ("chainmail", "slice", "torso", "armor_chainmail_torso"),
    ("breastplate", "slice", "torso", "armor_chainmail_torso"),
    ("full_plate", "slice", "torso", "armor_chainmail_torso"),
    ("half_plate", "slice", "torso", "armor_chainmail_torso"),
    ("leather", "slice", "torso", "armor_leather_torso"),
    ("padded", "slice", "torso", "armor_leather_torso"),
    ("robes", "slice", "torso", "armor_robes_torso"),
    # Shields -> Sockets
    ("shield", "socket", "off_hand", "shield_round"),
    ("buckler", "socket", "off_hand", "shield_round"),
    # Weapons -> Sockets
    ("greataxe", "socket", "main_hand", "wpn_greataxe"),
    ("battleaxe", "socket", "main_hand", "wpn_greataxe"),
    ("longsword", "socket", "main_hand", "wpn_sword"),
    ("shortsword", "socket", "main_hand", "wpn_sword"),
    ("scimitar", "socket", "main_hand", "wpn_sword"),
    ("rapier", "socket", "main_hand", "wpn_sword"),
    ("dagger", "socket", "main_hand", "wpn_sword"),
    ("bow", "socket", "main_hand", "wpn_bow"),
    ("staff", "socket", "main_hand", "wpn_staff"),
    ("mace", "socket", "main_hand", "wpn_sword"),
    # Headgear
    ("helm", "socket", "head", "helm_iron"),
]


def get_race_bone_scales(race_name: str | None) -> dict[str, list[float]]:
    if not race_name:
        return {k: list(v) for k, v in RACE_BONE_SCALES["human"].items()}
    normalized = race_name.strip().lower().replace("_", "-")
    scales = RACE_BONE_SCALES.get(normalized, RACE_BONE_SCALES["human"])
    return {k: list(v) for k, v in scales.items()}


def map_item_to_visual(item_id: str, slot: str | None = None) -> tuple[str, str, str] | None:
    normalized_id = item_id.strip().lower()
    for pattern, kind, target_slot, visual_id in ITEM_VISUAL_RULES:
        if pattern in normalized_id:
            resolved_slot = target_slot if kind == "slice" else (slot or target_slot)
            return (kind, resolved_slot, visual_id)
    # Default fallback if slot is known
    if slot in {"body", "torso"}:
        return ("slice", "torso", "armor_leather_torso")
    if slot in {"main_hand", "off_hand", "two_handed"}:
        return ("socket", slot, "wpn_sword")
    return None


def generate_model_recipe(
    character: Any,
    ruleset_definitions: dict[str, dict[str, Any]] | None = None,
) -> ModelRecipe:
    """Evaluates character choices and equipment state into an authoritative ModelRecipe."""
    if isinstance(character, dict):
        choices = character.get("choices", {})
        equipment_state = character.get("equipment_state", {})
        presentation = character.get("presentation", {})
    elif hasattr(character, "builder") and hasattr(character.builder, "character"):
        char = character.builder.character
        choices = getattr(char, "choices", {})
        equipment_state = getattr(character, "equipment_state", getattr(char, "equipment_state", {}))
        presentation = getattr(character, "presentation", getattr(char, "presentation", {}))
    else:
        choices = getattr(character, "choices", {})
        equipment_state = getattr(character, "equipment_state", {})
        presentation = getattr(character, "presentation", {})

    if isinstance(presentation, dict):
        gender_presentation = presentation.get("gender_presentation")
    else:
        gender_presentation = getattr(
            presentation,
            "gender_presentation",
            None,
        )
    if gender_presentation is not None and (
        not isinstance(gender_presentation, str)
        or gender_presentation not in {"male", "female"}
    ):
        raise ValueError("gender_presentation must be male or female")

    # Extract race
    race_name = "human"
    race_choice_id = "race.human"
    raw_races = choices.get("race", []) if isinstance(choices, dict) else []
    if raw_races:
        raw_race = raw_races[0] if isinstance(raw_races, list) else str(raw_races)
        raw_race_lower = raw_race.strip().lower()
        race_choice_id = _normalize_race_choice_id(raw_race)
        if "half-orc" in raw_race_lower or "half_orc" in raw_race_lower:
            race_name = "half-orc"
        elif "half-elf" in raw_race_lower or "half_elf" in raw_race_lower:
            race_name = "half-elf"
        elif "dwarf" in raw_race_lower:
            race_name = "dwarf"
        elif "halfling" in raw_race_lower:
            race_name = "halfling"
        elif "gnome" in raw_race_lower:
            race_name = "gnome"
        elif "elf" in raw_race_lower:
            race_name = "elf"
        elif "human" in raw_race_lower:
            race_name = "human"
        else:
            race_name = raw_race.split(":")[-1].split(".")[-1].strip().lower().replace("_", "-")

    # Extract class
    class_name = ""
    raw_classes = choices.get("class", []) if isinstance(choices, dict) else []
    if raw_classes:
        raw_class = raw_classes[0] if isinstance(raw_classes, list) else str(raw_classes)
        raw_class_lower = raw_class.strip().lower()
        for known_class in [
            "wizard", "sorcerer", "fighter", "cleric", "rogue",
            "barbarian", "paladin", "ranger", "druid", "bard", "monk",
        ]:
            if known_class in raw_class_lower:
                class_name = known_class
                break
        if not class_name:
            class_name = raw_class.split(":")[-1].split(".")[-1].strip().lower().replace("_", "-")

    bone_scales = get_race_bone_scales(race_name)
    if gender_presentation is not None:
        proportion_scales = (
            {
                "spine": [1.04, 1.0, 1.04],
                "shoulders": [1.08, 1.0, 1.0],
            }
            if gender_presentation == "male"
            else {
                "spine": [0.98, 1.0, 0.98],
                "shoulders": [0.96, 1.0, 1.0],
                "hips": [1.06, 1.0, 1.06],
            }
        )
        for bone, factors in proportion_scales.items():
            base_scale = bone_scales.setdefault(bone, [1.0, 1.0, 1.0])
            bone_scales[bone] = [
                base_scale[index] * factors[index]
                for index in range(3)
            ]
    slices = dict(DEFAULT_BASE_SLICES)
    sockets: dict[str, str] = {}

    if race_name == "dwarf":
        slices["hair"] = "beard_braided"
    elif race_name == "elf":
        slices["hair"] = "hair_long_elven"

    # Evaluate equipped items
    items = equipment_state.get("items", []) if isinstance(equipment_state, dict) else []
    for item in items:
        if not isinstance(item, dict):
            continue
        slot = item.get("slot")
        if not slot:
            continue
        item_id = item.get("item_id", "")
        visual = map_item_to_visual(item_id, slot=slot)
        if visual:
            kind, target_slot, visual_id = visual
            if kind == "slice":
                slices[target_slot] = visual_id
                if "chainmail" in visual_id or "plate" in visual_id:
                    slices["legs"] = "armor_chainmail_legs"
            elif kind == "socket":
                sockets[target_slot] = visual_id

    # Class visual fallback if no armor is worn
    if slices.get("torso") == "torso_base" and class_name in {"wizard", "sorcerer"}:
        slices["torso"] = "armor_robes_torso"

    # Direct equipment visual overrides from presentation profile
    if isinstance(presentation, dict):
        presentation_data = presentation
    elif hasattr(presentation, "to_record"):
        presentation_data = presentation.to_record()
    else:
        presentation_data = {}

    equipment_visuals = presentation_data.get("equipment_visuals", {})
    for slot_name, asset_ref in equipment_visuals.items():
        if asset_ref:
            if slot_name in slices:
                slices[slot_name] = asset_ref
            else:
                sockets[slot_name] = asset_ref

    palette_tints = {
        "skin": 4,
        "hair": 12,
        "primary": 2,
        "metal": 1,
        "pants": 116,
        "iris": 31,
    }
    appearance_color_options = get_race_appearance_color_options(race_choice_id)
    if race_choice_id == "race.elf.drow":
        for tint_name in ("skin", "hair", "iris"):
            options = appearance_color_options.get(tint_name, [])
            if options:
                palette_tints[tint_name] = options[0]
    material_tints = presentation_data.get("material_tints", {})
    material_tints_by_race = presentation_data.get(
        "material_tints_by_race", {}
    )
    race_material_tints = (
        material_tints_by_race.get(race_choice_id, {})
        if isinstance(material_tints_by_race, dict)
        else {}
    )
    legacy_profile_tints = (
        material_tints_by_race.get(race_name, {})
        if isinstance(material_tints_by_race, dict)
        else {}
    )
    if isinstance(material_tints, dict):
        for tint_name in ("skin", "hair", "cloths", "secondary", "pants", "iris"):
            if tint_name in {"skin", "hair", "iris"}:
                race_tint_value = (
                    race_material_tints.get(tint_name)
                    if isinstance(race_material_tints, dict)
                    else None
                )
                if not isinstance(race_tint_value, str):
                    race_tint_value = (
                        legacy_profile_tints.get(tint_name)
                        if isinstance(legacy_profile_tints, dict)
                        else None
                    )
                tint_value = (
                    race_tint_value
                    if isinstance(race_tint_value, str)
                    else material_tints.get(tint_name)
                )
            else:
                tint_value = material_tints.get(tint_name)
            if not isinstance(tint_value, str):
                continue
            if (
                tint_name in {"skin", "hair", "iris"}
                and tint_value.upper()
                not in appearance_color_options.get(tint_name, [])
            ):
                continue
            palette_tints[tint_name] = tint_value.upper()

    return ModelRecipe(
        race_profile=race_name,
        race_choice_id=race_choice_id,
        gender_presentation=gender_presentation,
        bone_scales=bone_scales,
        slices=slices,
        sockets=sockets,
        palette_tints=palette_tints,
        appearance_color_options=appearance_color_options,
    )


@dataclass
class ModelRecipe:
    race_profile: str = "human"
    race_choice_id: str = ""
    gender_presentation: str | None = None
    bone_scales: dict[str, list[float]] = field(default_factory=dict)
    slices: dict[str, str] = field(default_factory=dict)
    sockets: dict[str, str] = field(default_factory=dict)
    palette_tints: dict[str, int | str] = field(default_factory=dict)
    appearance_color_options: dict[str, list[str]] = field(default_factory=dict)

    def __post_init__(self) -> None:
        if not self.race_choice_id:
            self.race_choice_id = _normalize_race_choice_id(self.race_profile)

    def to_record(self) -> dict[str, Any]:
        return {
            "race_profile": self.race_profile,
            "race_choice_id": self.race_choice_id,
            "gender_presentation": self.gender_presentation,
            "bone_scales": {k: list(v) for k, v in self.bone_scales.items()},
            "slices": dict(self.slices),
            "sockets": dict(self.sockets),
            "palette_tints": dict(self.palette_tints),
            "appearance_color_options": {
                tint: list(colors)
                for tint, colors in self.appearance_color_options.items()
            },
            "bone_scales_list": [
                {"bone": k, "x": float(v[0]), "y": float(v[1]), "z": float(v[2])}
                for k, v in self.bone_scales.items()
                if len(v) >= 3
            ],
            "slices_list": [
                {"name": k, "value": str(v)}
                for k, v in self.slices.items()
            ],
            "sockets_list": [
                {"name": k, "value": str(v)}
                for k, v in self.sockets.items()
            ],
            "palette_tints_list": [
                {"name": k, "value": str(v)}
                for k, v in self.palette_tints.items()
            ],
            "appearance_color_options_list": [
                {"name": tint, "values": list(colors)}
                for tint, colors in self.appearance_color_options.items()
            ],
        }

    @classmethod
    def from_record(cls, data: dict[str, Any]) -> "ModelRecipe":
        return cls(
            race_profile=data.get("race_profile", "human"),
            race_choice_id=data.get("race_choice_id", ""),
            gender_presentation=data.get("gender_presentation"),
            bone_scales=dict(data.get("bone_scales", {})),
            slices=dict(data.get("slices", {})),
            sockets=dict(data.get("sockets", {})),
            palette_tints=dict(data.get("palette_tints", {})),
            appearance_color_options={
                tint: list(colors)
                for tint, colors in data.get("appearance_color_options", {}).items()
            },
        )


@dataclass
class PresentationProfile:
    portrait: str | None = None
    token: str | None = None
    token_frame: str | None = None
    model: str | None = None
    scale: float = 1.0
    material_tints: dict[str, str] = field(default_factory=dict)
    material_tints_by_race: dict[str, dict[str, str]] = field(default_factory=dict)
    equipment_visuals: dict[str, str] = field(default_factory=dict)
    animation_style: str | None = None
    gender_presentation: str | None = None
    sounds: dict[str, str] = field(default_factory=dict)
    effects: dict[str, str] = field(default_factory=dict)
    model_recipe: ModelRecipe | None = None

    def set_asset(self, slot: str, asset_ref: Any) -> None:
        if slot in {"portrait", "token", "token_frame", "model", "animation_style"}:
            setattr(self, slot, asset_ref)
        elif slot == "scale":
            self.scale = float(asset_ref)
        elif slot.startswith("equipment:"):
            self.equipment_visuals[slot.removeprefix("equipment:")] = asset_ref
        elif slot.startswith("sound:"):
            self.sounds[slot.removeprefix("sound:")] = asset_ref
        elif slot.startswith("effect:"):
            self.effects[slot.removeprefix("effect:")] = asset_ref
        elif slot.startswith("tint:"):
            self.material_tints[slot.removeprefix("tint:")] = asset_ref
        else:
            raise ValueError(f"Unknown presentation slot: {slot}")

    def validate(self) -> list[str]:
        errors: list[str] = []
        if self.scale <= 0:
            errors.append("scale must be positive")
        if self.gender_presentation is not None and (
            not isinstance(self.gender_presentation, str)
            or self.gender_presentation not in {"male", "female"}
        ):
            errors.append("gender_presentation must be male or female")
        for tint_name, hex_code in self.material_tints.items():
            if not isinstance(hex_code, str) or not hex_code.startswith("#"):
                errors.append(f"invalid hex code for tint '{tint_name}': {hex_code}")
        for race_name, tints in self.material_tints_by_race.items():
            if not isinstance(tints, dict):
                errors.append(f"invalid appearance colors for race '{race_name}'")
                continue
            for tint_name, hex_code in tints.items():
                if not isinstance(hex_code, str) or not hex_code.startswith("#"):
                    errors.append(
                        f"invalid hex code for race '{race_name}' "
                        f"tint '{tint_name}': {hex_code}"
                    )
        return errors

    def to_record(self) -> dict[str, Any]:
        record: dict[str, Any] = {
            "portrait": self.portrait,
            "token": self.token,
            "token_frame": self.token_frame,
            "model": self.model,
            "scale": self.scale,
            "material_tints": dict(self.material_tints),
            "material_tints_by_race": {
                race: dict(tints)
                for race, tints in self.material_tints_by_race.items()
            },
            "equipment_visuals": dict(self.equipment_visuals),
            "animation_style": self.animation_style,
            "gender_presentation": self.gender_presentation,
            "sounds": dict(self.sounds),
            "effects": dict(self.effects),
        }
        if self.model_recipe is not None:
            record["model_recipe"] = self.model_recipe.to_record()
        return record

    @classmethod
    def from_record(cls, data: dict[str, Any]) -> "PresentationProfile":
        model_recipe_data = data.get("model_recipe")
        model_recipe = ModelRecipe.from_record(model_recipe_data) if model_recipe_data else None
        gender_presentation = data.get("gender_presentation")
        if gender_presentation is not None and (
            not isinstance(gender_presentation, str)
            or gender_presentation not in {"male", "female"}
        ):
            raise ValueError("Draft has an invalid gender presentation")
        return cls(
            portrait=data.get("portrait"),
            token=data.get("token"),
            token_frame=data.get("token_frame"),
            model=data.get("model"),
            scale=float(data.get("scale", 1.0)),
            material_tints=dict(data.get("material_tints", {})),
            material_tints_by_race={
                race: dict(tints)
                for race, tints in data.get("material_tints_by_race", {}).items()
            },
            equipment_visuals=dict(data.get("equipment_visuals", {})),
            animation_style=data.get("animation_style"),
            gender_presentation=gender_presentation,
            sounds=dict(data.get("sounds", {})),
            effects=dict(data.get("effects", {})),
            model_recipe=model_recipe,
        )

    def preview(self) -> dict[str, Any]:
        return self.to_record()
