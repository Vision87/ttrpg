"""Deterministic dice and arithmetic evaluation with an audit breakdown."""

from __future__ import annotations

import ast
import operator
import random
import re
from dataclasses import dataclass


class FormulaError(ValueError):
    """Raised when a formula cannot be evaluated safely."""


@dataclass(frozen=True)
class Contribution:
    source: str
    value: int


@dataclass(frozen=True)
class Evaluation:
    total: int
    contributions: tuple[Contribution, ...]


_DICE = re.compile(r"(?P<count>\d+)?d(?P<sides>\d+)")
_OPERATORS = {
    ast.Add: operator.add,
    ast.Sub: operator.sub,
    ast.Mult: operator.mul,
    ast.Div: lambda left, right: int(left / right),
    ast.USub: operator.neg,
    ast.UAdd: operator.pos,
}


def evaluate_formula(
    formula: str,
    context: dict[str, int],
    *,
    seed: int,
) -> Evaluation:
    rng = random.Random(seed)
    contributions: list[Contribution] = []

    def replace_dice(match: re.Match[str]) -> str:
        count = int(match.group("count") or 1)
        sides = int(match.group("sides"))
        if sides < 1 or count < 1 or count > 100:
            raise FormulaError("Dice count and sides must be positive and bounded")
        rolls = [rng.randint(1, sides) for _ in range(count)]
        value = sum(rolls)
        contributions.append(
            Contribution(f"{count}d{sides} ({', '.join(map(str, rolls))})", value)
        )
        return str(value)

    normalized = _DICE.sub(replace_dice, formula)
    tree = ast.parse(normalized, mode="eval")

    def visit(node: ast.AST) -> int:
        if isinstance(node, ast.Expression):
            return visit(node.body)
        if isinstance(node, ast.Constant) and isinstance(node.value, int):
            return node.value
        if isinstance(node, ast.Name) and node.id in context:
            value = context[node.id]
            contributions.append(Contribution(node.id, value))
            return value
        if isinstance(node, ast.BinOp) and type(node.op) in _OPERATORS:
            return _OPERATORS[type(node.op)](visit(node.left), visit(node.right))
        if isinstance(node, ast.UnaryOp) and type(node.op) in _OPERATORS:
            return _OPERATORS[type(node.op)](visit(node.operand))
        raise FormulaError("Formula contains an unsupported expression")

    return Evaluation(visit(tree), tuple(contributions))
