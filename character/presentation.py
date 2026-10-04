"""Renderer-independent character presentation profile."""

from __future__ import annotations

from dataclasses import dataclass, field
from typing import Any


@dataclass
class PresentationProfile:
    portrait: str | None = None
    token: str | None = None
    token_frame: str | None = None
    model: str | None = None
    scale: float = 1.0
    material_tints: dict[str, str] = field(default_factory=dict)
    equipment_visuals: dict[str, str] = field(default_factory=dict)
    animation_style: str | None = None
    sounds: dict[str, str] = field(default_factory=dict)
    effects: dict[str, str] = field(default_factory=dict)
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
        for tint_name, hex_code in self.material_tints.items():
            if not isinstance(hex_code, str) or not hex_code.startswith("#"):
                errors.append(f"invalid hex code for tint '{tint_name}': {hex_code}")
        return errors

    def to_record(self) -> dict[str, Any]:
        return {
            "portrait": self.portrait,
            "token": self.token,
            "token_frame": self.token_frame,
            "model": self.model,
            "scale": self.scale,
            "material_tints": dict(self.material_tints),
            "equipment_visuals": dict(self.equipment_visuals),
            "animation_style": self.animation_style,
            "sounds": dict(self.sounds),
            "effects": dict(self.effects),
        }

    @classmethod
    def from_record(cls, data: dict[str, Any]) -> "PresentationProfile":
        return cls(
            portrait=data.get("portrait"),
            token=data.get("token"),
            token_frame=data.get("token_frame"),
            model=data.get("model"),
            scale=float(data.get("scale", 1.0)),
            material_tints=dict(data.get("material_tints", {})),
            equipment_visuals=dict(data.get("equipment_visuals", {})),
            animation_style=data.get("animation_style"),
            sounds=dict(data.get("sounds", {})),
            effects=dict(data.get("effects", {})),
        )

    def preview(self) -> dict[str, Any]:
        return self.to_record()

