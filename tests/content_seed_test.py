import json
from pathlib import Path

from rules.package_resolver import Package, PackageResolver
from rules.schema import validate_definition


def load_package(path: Path) -> Package:
    data = json.loads(path.read_text())
    for definition in data["definitions"].values():
        validate_definition(definition)
    return Package(
        data["id"],
        data["version"],
        data["dependencies"],
        data["definitions"],
        data["operations"],
    )


def test_seeded_core_and_selected_content_resolve() -> None:
    root = Path("content")
    core = load_package(root / "dnd35-core/package.json")
    selected = load_package(root / "dnd35-selected/package.json")
    resolved = PackageResolver([core, selected]).resolve(
        [("dnd35-selected", "1.0.0")]
    )
    assert "race.human" in resolved
    assert "class.fighter" in resolved
    assert "spell.magic-missile" in resolved
    assert resolved["item.firebrand"]["_alias_of"] == "item.emberbound-blade"


def test_dark_heresy_core_package_resolves() -> None:
    root = Path("content")
    dh_package = load_package(root / "dark-heresy-core/package.json")
    resolved = PackageResolver([dh_package]).resolve(
        [("dark-heresy-core", "1.0.0")]
    )
    assert "characteristic.ballistic_skill" in resolved
    assert "homeworld.hive_world" in resolved
    assert "career.guardsman" in resolved
    assert "talent.marksman" in resolved
    assert "item.lasgun" in resolved
    assert "monster.cultist" in resolved

