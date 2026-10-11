"""Autonomous AI Director and Solo Oracle Engine for single-player narrative arbitration."""

from __future__ import annotations

import random
from dataclasses import dataclass, field
from typing import Any


LIKELIHOOD_THRESHOLDS: dict[str, int] = {
    "almost_impossible": 10,
    "unlikely": 25,
    "even": 50,
    "likely": 75,
    "almost_certain": 90,
}

ACTIONS: list[str] = [
    "Betray", "Protect", "Uncover", "Delay", "Transform",
    "Ambush", "Rally", "Escape", "Reveal", "Corrupt",
]

THEMES: list[str] = [
    "Secret", "Ally", "Trap", "Rival", "Resource",
    "Danger", "Artifact", "Path", "Monster", "Prophecy",
]


@dataclass
class OracleResult:
    question: str
    likelihood: str
    roll: int
    threshold: int
    outcome: str  # "yes_and", "yes", "yes_but", "no_but", "no", "no_and"
    answer_text: str
    twist: dict[str, str] | None = None

    def to_dict(self) -> dict[str, Any]:
        return {
            "question": self.question,
            "likelihood": self.likelihood,
            "roll": self.roll,
            "threshold": self.threshold,
            "outcome": self.outcome,
            "answer_text": self.answer_text,
            "twist": self.twist,
        }


@dataclass
class SoloOracleEngine:
    chaos_factor: int = 5  # 1 to 9 scale
    seed: int | None = None
    _rng: random.Random = field(default_factory=random.Random)

    def __post_init__(self) -> None:
        if self.seed is not None:
            self._rng = random.Random(self.seed)

    def set_seed(self, seed: int) -> None:
        self.seed = seed
        self._rng = random.Random(seed)

    def ask(
        self,
        question: str,
        likelihood: str = "even",
        roll: int | None = None,
        context: dict[str, Any] | None = None,
    ) -> OracleResult:
        base_thresh = LIKELIHOOD_THRESHOLDS.get(likelihood, 50)
        # Chaos factor adjusts threshold (+2 per point above 5, -2 below 5)
        adjusted_thresh = max(5, min(95, base_thresh + (self.chaos_factor - 5) * 2))

        actual_roll = roll if roll is not None else self._rng.randint(1, 100)

        # Extreme outcomes (criticals)
        has_twist = False
        twist_obj = None

        if actual_roll <= adjusted_thresh:
            if actual_roll <= max(1, adjusted_thresh // 5):
                outcome = "yes_and"
                answer_text = "Yes, and the situation improves exceptionally!"
            elif actual_roll >= adjusted_thresh - 5 and adjusted_thresh > 15:
                outcome = "yes_but"
                answer_text = "Yes, but with an unexpected complication."
            else:
                outcome = "yes"
                answer_text = "Yes."
        else:
            if actual_roll >= 95 or actual_roll >= (100 - (100 - adjusted_thresh) // 5):
                outcome = "no_and"
                answer_text = "No, and the situation worsens drastically!"
            elif actual_roll <= adjusted_thresh + 5 and adjusted_thresh < 85:
                outcome = "no_but"
                answer_text = "No, but a silver lining appears."
            else:
                outcome = "no"
                answer_text = "No."

        # Random twist trigger on doubles (e.g. 11, 22, 33...) or if rolled within chaos factor
        if actual_roll % 11 == 0 and (actual_roll // 11) <= self.chaos_factor:
            twist_obj = self.generate_random_event()

        return OracleResult(
            question=question,
            likelihood=likelihood,
            roll=actual_roll,
            threshold=adjusted_thresh,
            outcome=outcome,
            answer_text=answer_text,
            twist=twist_obj,
        )

    def generate_random_event(
        self,
        action_idx: int | None = None,
        theme_idx: int | None = None,
    ) -> dict[str, str]:
        a_idx = action_idx if action_idx is not None else self._rng.randint(0, len(ACTIONS) - 1)
        t_idx = theme_idx if theme_idx is not None else self._rng.randint(0, len(THEMES) - 1)
        action_word = ACTIONS[a_idx % len(ACTIONS)]
        theme_word = THEMES[t_idx % len(THEMES)]
        return {
            "action": action_word,
            "theme": theme_word,
            "summary": f"{action_word} of {theme_word}",
        }

    def advance_scene(
        self,
        scene_description: str,
        roll: int | None = None,
    ) -> dict[str, Any]:
        actual_roll = roll if roll is not None else self._rng.randint(1, 10)
        # If roll <= chaos_factor, scene is altered or interrupted
        if actual_roll <= self.chaos_factor:
            if actual_roll % 2 == 1:
                status = "altered_scene"
                event = self.generate_random_event()
                details = f"Scene is altered: unexpected twist emerges ({event['summary']})."
            else:
                status = "interrupted_scene"
                event = self.generate_random_event()
                details = f"Scene interrupted before setup completes ({event['summary']})."
        else:
            status = "expected_scene"
            event = None
            details = "Scene proceeds as planned."

        return {
            "scene": scene_description,
            "status": status,
            "details": details,
            "event": event,
            "chaos_factor": self.chaos_factor,
        }
