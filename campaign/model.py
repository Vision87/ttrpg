"""Campaign configuration and character-incarnation models."""

from __future__ import annotations

from dataclasses import dataclass, field
from typing import Any


@dataclass
class Campaign:
    campaign_id: str
    name: str
    game_family: str
    packages: dict[str, str]
    validation_policy: str = "guided"
    package_lock: bool = True


@dataclass
class CharacterIncarnation:
    incarnation_id: str
    character_id: str
    campaign_id: str
    level: int = 1
    experience: int = 0
    inventory: list[str] = field(default_factory=list)
    conditions: list[str] = field(default_factory=list)
    relationships: dict[str, str] = field(default_factory=dict)
    quest_state: dict[str, Any] = field(default_factory=dict)
    history: list[dict[str, Any]] = field(default_factory=list)

    def record_event(self, event: dict[str, Any]) -> None:
        self.history.append(dict(event))
