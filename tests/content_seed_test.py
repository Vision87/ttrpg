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
    races = {
        definition_id
        for definition_id, definition in resolved.items()
        if definition["type"] == "race"
    }
    assert {
        definition_id
        for definition_id, definition in resolved.items()
        if definition["type"] == "class" and "parent_class" not in definition
    } == {
        "class.barbarian",
        "class.bard",
        "class.cleric",
        "class.druid",
        "class.fighter",
        "class.monk",
        "class.paladin",
        "class.ranger",
        "class.rogue",
        "class.sorcerer",
        "class.wizard",
    }
    assert {
        definition_id
        for definition_id, definition in resolved.items()
        if definition.get("parent_class") == "class.wizard"
    } == {
        "class.wizard.abjurer",
        "class.wizard.conjurer",
        "class.wizard.diviner",
        "class.wizard.enchanter",
        "class.wizard.evoker",
        "class.wizard.illusionist",
        "class.wizard.necromancer",
        "class.wizard.transmuter",
    }
    assert {
        definition_id
        for definition_id in races
        if "parent_race" not in resolved[definition_id]
    } == {
        "race.dwarf",
        "race.elf",
        "race.gnome",
        "race.half-elf",
        "race.half-orc",
        "race.halfling",
        "race.human",
    }
    assert {
        definition_id
        for definition_id in races
        if "parent_race" in resolved[definition_id]
    } == {
        "race.dwarf.hill",
        "race.dwarf.mountain",
        "race.dwarf.duergar",
        "race.elf.high",
        "race.elf.gray",
        "race.elf.wild",
        "race.elf.wood",
        "race.elf.aquatic",
        "race.elf.drow",
        "race.gnome.rock",
        "race.gnome.deep",
        "race.halfling.lightfoot",
        "race.halfling.tallfellow",
        "race.halfling.deep",
    }
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
