"""Dynamic fog-of-war, line-of-sight (LOS), and client snapshot filtering."""

from __future__ import annotations

import math
from typing import TYPE_CHECKING, Any, Callable

if TYPE_CHECKING:
    from session.runtime import Session


def bresenham_line(x0: int, y0: int, x1: int, y1: int) -> list[tuple[int, int]]:
    """Generate discrete grid points along the line segment between (x0, y0) and (x1, y1)."""
    points: list[tuple[int, int]] = []
    dx = abs(x1 - x0)
    dy = abs(y1 - y0)
    sx = 1 if x0 < x1 else -1
    sy = 1 if y0 < y1 else -1
    err = dx - dy
    curr_x, curr_y = x0, y0

    while True:
        points.append((curr_x, curr_y))
        if curr_x == x1 and curr_y == y1:
            break
        e2 = 2 * err
        if e2 > -dy:
            err -= dy
            curr_x += sx
        if e2 < dx:
            err += dx
            curr_y += sy
    return points


def tile_blocks_vision(tile: Any) -> bool:
    """Check if a tile or tile dictionary blocks line-of-sight."""
    if tile is None:
        return False
    if isinstance(tile, dict):
        return bool(tile.get("blocks_vision", False))
    return bool(getattr(tile, "blocks_vision", False))


def has_line_of_sight(
    x0: int,
    y0: int,
    x1: int,
    y1: int,
    is_blocking: Callable[[int, int], bool],
) -> bool:
    """Return True if there is an unoccluded line of sight from (x0, y0) to (x1, y1)."""
    if x0 == x1 and y0 == y1:
        return True
    line = bresenham_line(x0, y0, x1, y1)
    # Check all intermediate points strictly between start and destination
    for px, py in line[1:-1]:
        if is_blocking(px, py):
            return False
    return True


def compute_visible_coordinates(
    origins: list[tuple[int, int, int]],  # (x, y, vision_range)
    all_tiles: dict[str, Any],
) -> set[str]:
    """Compute the set of visible coordinate strings ('x,y') from given origin points."""
    if not origins:
        return set()

    def is_blocking(x: int, y: int) -> bool:
        t = all_tiles.get(f"{x},{y}")
        return tile_blocks_vision(t)

    visible: set[str] = set()

    for ox, oy, vision_range in origins:
        visible.add(f"{ox},{oy}")
        # Search bounding box of vision range
        r = int(math.ceil(vision_range))
        for tx in range(ox - r, ox + r + 1):
            for ty in range(oy - r, oy + r + 1):
                dist = math.hypot(tx - ox, ty - oy)
                if dist <= vision_range:
                    coord_key = f"{tx},{ty}"
                    if coord_key in all_tiles or len(all_tiles) == 0:
                        if has_line_of_sight(ox, oy, tx, ty, is_blocking):
                            visible.add(coord_key)

    return visible


def generate_client_snapshot(session: Session, controller_id: str) -> dict[str, Any]:
    """Generate an authoritative, filtered client snapshot for a specific controller."""
    controller = session.get_controller(controller_id)
    if controller is None:
        raise ValueError(f"Controller {controller_id} is not registered in session {session.session_id}")

    # Gather effective tiles
    tiles_dict: dict[str, Any] = dict(session.tiles)
    if not tiles_dict and hasattr(session, "board") and getattr(session, "board", None) is not None:
        board_tiles = getattr(session.board, "tiles", {})
        tiles_dict = {
            k: (
                {
                    "x": v.x,
                    "y": v.y,
                    "terrain": v.terrain,
                    "walkable": v.walkable,
                    "blocks_vision": v.blocks_vision,
                    "light_level": v.light_level,
                }
                if hasattr(v, "x")
                else v
            )
            for k, v in board_tiles.items()
        }

    # GMs have omniscient visibility
    if controller.is_gm():
        return {
            "session_id": session.session_id,
            "controller_id": controller_id,
            "role": controller.kind,
            "is_gm": True,
            "tiles": dict(tiles_dict),
            "entities": {k: dict(v) for k, v in session.entities.items()},
            "notes": [dict(n) for n in session.notes],
        }

    # Non-GM / player controllers: calculate LOS from controlled characters
    origins: list[tuple[int, int, int]] = []
    for eid in controller.entity_ids:
        entity = session.entities.get(eid)
        if entity:
            pos = entity.get("position", {"x": 0, "y": 0})
            range_val = entity.get("vision_range", 10)
            origins.append((pos["x"], pos["y"], range_val))

    visible_coords = compute_visible_coordinates(origins, tiles_dict)

    # Filter tiles
    filtered_tiles = {
        coord: tile for coord, tile in tiles_dict.items() if coord in visible_coords
    }

    # Filter entities: controlled entities are always included; others only if on a visible tile
    filtered_entities: dict[str, dict[str, Any]] = {}
    for eid, entity in session.entities.items():
        if eid in controller.entity_ids:
            filtered_entities[eid] = dict(entity)
        else:
            pos = entity.get("position", {"x": 0, "y": 0})
            coord_key = f"{pos['x']},{pos['y']}"
            if coord_key in visible_coords:
                # Exclude if explicitly marked hidden or stealthed
                if not entity.get("stealthed", False):
                    filtered_entities[eid] = dict(entity)

    # Filter notes: players only receive public (unhidden) notes
    filtered_notes = [dict(n) for n in session.notes if not n.get("hidden", True)]

    return {
        "session_id": session.session_id,
        "controller_id": controller_id,
        "role": controller.kind,
        "is_gm": False,
        "tiles": filtered_tiles,
        "entities": filtered_entities,
        "notes": filtered_notes,
    }
