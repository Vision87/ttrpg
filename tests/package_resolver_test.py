from rules.package_resolver import Package, PackageResolutionError, PackageResolver


def test_package_resolution_and_operations() -> None:
    core = Package(
        "dnd35-core",
        "1.0.0",
        {},
        {"weapon.longsword": {"damage": "1d8", "proficiency": "martial"}},
        [],
    )
    extension = Package(
        "campaign-homebrew",
        "1.0.0",
        {"dnd35-core": ">=1.0.0"},
        {"item.ember-blade": {"base": "weapon.longsword", "damage_type": "fire"}},
        [
            {
                "action": "patch",
                "definition_id": "weapon.longsword",
                "changes": {"damage": "1d10"},
            },
            {
                "action": "alias",
                "definition_id": "weapon.ember-blade",
                "target_id": "item.ember-blade",
            },
            {"action": "disable", "definition_id": "weapon.longsword"},
        ],
    )
    resolved = PackageResolver([core, extension]).resolve(
        [("campaign-homebrew", "1.0.0")]
    )
    assert resolved["weapon.longsword"]["damage"] == "1d10"
    assert resolved["weapon.longsword"]["_disabled"] is True
    assert resolved["weapon.ember-blade"]["_alias_of"] == "item.ember-blade"


def test_missing_dependency_is_actionable() -> None:
    extension = Package("extension", "1.0.0", {"missing": ">=1.0.0"}, {}, [])
    try:
        PackageResolver([extension]).resolve([("extension", "1.0.0")])
    except PackageResolutionError as error:
        assert "Dependency missing" in str(error)
    else:
        raise AssertionError("expected missing dependency error")
