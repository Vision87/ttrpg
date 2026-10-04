"""Capability-limited extension operation validation."""

from __future__ import annotations

from dataclasses import dataclass
from typing import Any, Callable


class SandboxError(ValueError):
    """Raised when an extension exceeds its declared runtime contract."""


ALLOWED_OPERATIONS = {
    "roll",
    "apply_effect",
    "change_resource",
    "move_entity",
    "create_entity",
    "emit_presentation",
}


@dataclass(frozen=True)
class SandboxResult:
    operations: tuple[dict[str, Any], ...]


class SandboxRuntime:
    def __init__(
        self,
        *,
        api_version: str = "1",
        capabilities: set[str] | None = None,
        max_operations: int = 32,
    ) -> None:
        self.api_version = api_version
        self.capabilities = capabilities or set()
        self.max_operations = max_operations

    def execute(
        self,
        script: Callable[[dict[str, Any]], list[dict[str, Any]]],
        context: dict[str, Any],
    ) -> SandboxResult:
        try:
            requested = script(
                {
                    "api_version": self.api_version,
                    "context": context,
                    "capabilities": frozenset(self.capabilities),
                }
            )
        except Exception as error:
            raise SandboxError(f"script failed: {error}") from error
        if not isinstance(requested, list):
            raise SandboxError("script must return a list of operations")
        if len(requested) > self.max_operations:
            raise SandboxError("script exceeded operation limit")
        validated: list[dict[str, Any]] = []
        for operation in requested:
            if not isinstance(operation, dict):
                raise SandboxError("operation must be an object")
            operation_type = operation.get("type")
            if operation_type not in ALLOWED_OPERATIONS:
                raise SandboxError(f"unsupported operation: {operation_type}")
            if operation_type not in self.capabilities:
                raise SandboxError(f"capability not granted: {operation_type}")
            validated.append(dict(operation))
        return SandboxResult(tuple(validated))
