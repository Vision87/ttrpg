from rules.sandbox import SandboxError, SandboxRuntime


def test_sandbox_accepts_granted_operations() -> None:
    runtime = SandboxRuntime(capabilities={"roll", "apply_effect"})
    result = runtime.execute(
        lambda api: [
            {"type": "roll", "formula": "1d20"},
            {"type": "apply_effect", "effect_id": "burning"},
        ],
        {"actor_id": "character-1"},
    )
    assert len(result.operations) == 2
    assert result.operations[0]["type"] == "roll"


def test_sandbox_rejects_ungranted_operations_without_state_access() -> None:
    runtime = SandboxRuntime(capabilities={"roll"})
    try:
        runtime.execute(lambda api: [{"type": "move_entity"}], {})
    except SandboxError as error:
        assert "capability not granted" in str(error)
    else:
        raise AssertionError("expected sandbox capability error")
