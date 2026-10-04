from pathlib import Path


ROOT = Path("UnityClient")


def test_unity_client_contract_files_exist() -> None:
    expected = [
        ROOT / "Assets/Scripts/SessionDtos.cs",
        ROOT / "Assets/Scripts/SessionProjection.cs",
        ROOT / "Assets/Scripts/TacticalProjection.cs",
        ROOT / "Assets/Scripts/ImmersiveProjection.cs",
        ROOT / "Assets/Scripts/SessionClient.cs",
        ROOT / "Assets/StreamingAssets/session-fixture.json",
        ROOT / "Packages/manifest.json",
        ROOT / "ProjectSettings/ProjectVersion.txt",
    ]
    assert all(path.is_file() for path in expected)


def test_unity_client_keeps_rules_out_of_projections() -> None:
    source = (ROOT / "Assets/Scripts/SessionProjection.cs").read_text()
    tactical = (ROOT / "Assets/Scripts/TacticalProjection.cs").read_text()
    immersive = (ROOT / "Assets/Scripts/ImmersiveProjection.cs").read_text()
    assert "JsonUtility" not in source
    assert "Random" not in tactical
    assert "Random" not in immersive
    assert "SessionEnvelopeDto" in source
