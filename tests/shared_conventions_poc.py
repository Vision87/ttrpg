"""Round-trip proof of concept for shared identity/version/provenance conventions."""

from __future__ import annotations

import json


def main() -> None:
    record = {
        "id": "character-1",
        "type": "character",
        "version": 1,
        "package": {"id": "dnd35-core", "version": "1.0.0"},
        "asset": {"id": "model.ash-knight", "revision": 2},
        "derived": {
            "attack_bonus": {
                "value": 7,
                "sources": [
                    {
                        "package_id": "dnd35-core",
                        "package_version": "1.0.0",
                        "definition_id": "feat.power-attack",
                    }
                ],
            }
        },
        "extensions": {"homebrew": {"custom_flag": True}},
    }
    encoded = json.dumps(record, sort_keys=True)
    decoded = json.loads(encoded)
    assert decoded == record
    assert decoded["package"] == {"id": "dnd35-core", "version": "1.0.0"}
    assert decoded["asset"] == {"id": "model.ash-knight", "revision": 2}
    assert decoded["extensions"]["homebrew"]["custom_flag"] is True
    print("shared conventions proof of concept passed")


if __name__ == "__main__":
    main()
