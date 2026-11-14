"""Generates the 256x256 color palette atlas PNG for low-poly characters."""

from __future__ import annotations

from pathlib import Path
import struct
import zlib


SWATCHES: list[tuple[int, int, int]] = [
    # Row 0: Skin Tones
    (250, 220, 195),  # 0: Fair
    (240, 200, 170),  # 1: Light
    (225, 175, 140),  # 2: Peach / Tan
    (200, 150, 115),  # 3: Warm Tan
    (175, 125, 90),   # 4: Olive / Medium
    (140, 95, 65),    # 5: Brown
    (105, 65, 45),    # 6: Dark Brown
    (75, 45, 30),     # 7: Deep Dark
    (140, 165, 110),  # 8: Orcish Light Green
    (100, 135, 75),   # 9: Orcish Green
    (230, 230, 240),  # 10: Pale / Elf
    (180, 185, 200),  # 11: Ashen Elf / Drow Light
    (70, 70, 85),     # 12: Drow Dark Slate
    (245, 210, 175),  # 13: Halfling Warm
    (210, 160, 130),  # 14: Dwarf Ruddy
    (185, 130, 100),  # 15: Sunbaked

    # Row 1: Hair Tones
    (240, 220, 140),  # 16: Platinum Blonde
    (220, 185, 95),   # 17: Golden Blonde
    (195, 140, 60),   # 18: Honey Brown
    (180, 90, 40),    # 19: Auburn / Ginger
    (145, 65, 25),    # 20: Deep Red
    (115, 70, 45),    # 21: Light Chestnut
    (80, 45, 25),     # 22: Dark Brown
    (45, 28, 18),     # 23: Espresso
    (25, 25, 28),     # 24: Raven Black
    (130, 130, 135),  # 25: Silver Grey
    (190, 190, 195),  # 26: White Hair
    (60, 90, 130),    # 27: Blue Dye
    (110, 50, 110),   # 28: Purple Dye
    (50, 110, 70),    # 29: Green Dye
    (150, 40, 40),    # 30: Crimson Dye
    (75, 60, 50),     # 31: Beard Brown

    # Row 2: Leathers & Furs
    (215, 170, 115),  # 32: Rawhide
    (180, 130, 75),   # 33: Tan Leather
    (145, 95, 50),    # 34: Worn Leather
    (110, 70, 35),    # 35: Hard Leather
    (75, 45, 22),     # 36: Dark Leather
    (50, 30, 15),     # 37: Studded Black Leather
    (160, 115, 80),   # 38: Boot Leather
    (125, 85, 55),    # 39: Pouch Brown
    (90, 60, 40),     # 40: Strap Dark
    (210, 190, 150),  # 41: Fur Trim Light
    (160, 140, 110),  # 42: Fur Trim Grey
    (110, 90, 70),    # 43: Fur Trim Brown
    (230, 205, 160),  # 44: Parchment
    (140, 105, 70),   # 45: Belt Brown
    (85, 55, 30),     # 46: Scabbard Brown
    (60, 40, 25),     # 47: Glove Leather

    # Row 3: Metals & Armors
    (235, 240, 245),  # 48: Polished Chrome / White Steel
    (200, 205, 215),  # 49: Bright Steel
    (165, 170, 180),  # 50: Iron / Chainmail
    (130, 135, 145),  # 51: Medium Plate
    (95, 100, 110),   # 52: Dark Iron
    (65, 70, 80),     # 53: Blackened Steel
    (245, 215, 80),   # 54: Bright Gold
    (215, 175, 45),   # 55: Old Gold
    (175, 135, 30),   # 56: Burnished Brass
    (195, 125, 70),   # 57: Bronze
    (160, 90, 45),    # 58: Copper
    (120, 65, 30),    # 59: Tarnished Bronze
    (185, 210, 220),  # 60: Mythril Blue-Silver
    (150, 190, 190),  # 61: Adamantine Tint
    (80, 85, 95),     # 62: Helm Rim Steel
    (40, 45, 50),     # 63: Shadow Iron

    # Row 4: Primary Cloth (Blues & Purples)
    (170, 205, 245),  # 64: Sky Blue
    (105, 160, 225),  # 65: Azure
    (55, 115, 195),   # 66: Royal Blue
    (30, 75, 155),    # 67: Deep Navy
    (20, 45, 105),    # 68: Midnight Blue
    (195, 170, 235),  # 69: Lavender
    (145, 105, 200),  # 70: Violet
    (100, 55, 155),   # 71: Royal Purple
    (65, 30, 110),    # 72: Archmage Purple
    (45, 20, 75),     # 73: Dark Violet
    (90, 135, 170),   # 74: Steel Blue
    (60, 100, 135),   # 75: Robe Teal
    (35, 70, 95),     # 76: Deep Teal
    (135, 190, 215),  # 77: Ice Blue
    (40, 55, 85),     # 78: Tunic Indigo
    (25, 35, 55),     # 79: Cloak Navy

    # Row 5: Secondary Cloth (Reds & Oranges)
    (245, 150, 150),  # 80: Light Rose
    (225, 90, 90),    # 81: Coral Red
    (200, 45, 45),    # 82: Crimson
    (155, 25, 25),    # 83: Blood Red
    (110, 15, 15),    # 84: Maroon / Burgundy
    (70, 10, 10),     # 85: Dark Wine
    (245, 165, 80),   # 86: Amber Orange
    (215, 120, 35),   # 87: Flame Orange
    (175, 80, 20),    # 88: Rust
    (135, 50, 15),    # 89: Terracotta
    (245, 190, 170),  # 90: Peach Cloth
    (210, 110, 100),  # 91: Brick
    (165, 60, 60),    # 92: Tunic Red
    (120, 35, 40),    # 93: Cloak Crimson
    (85, 25, 30),     # 94: Sash Dark Red
    (55, 15, 20),     # 95: Deep Burgundy

    # Row 6: Greens & Earthy Tones
    (180, 225, 150),  # 96: Mint
    (135, 195, 95),   # 97: Meadow Green
    (85, 155, 55),    # 98: Forest Green
    (45, 115, 30),    # 99: Ranger Green
    (25, 75, 20),     # 100: Deep Pine
    (15, 45, 12),     # 101: Shadow Green
    (165, 185, 115),  # 102: Sage
    (130, 150, 80),   # 103: Moss
    (95, 115, 50),    # 104: Olive
    (65, 80, 35),     # 105: Camo Green
    (40, 50, 20),     # 106: Dark Olive
    (195, 215, 175),  # 107: Pale Leaf
    (115, 165, 140),  # 108: Jade
    (65, 120, 95),    # 109: Emerald Tunic
    (35, 75, 60),     # 110: Deep Jade
    (20, 45, 35),     # 111: Druid Cloak

    # Row 7: Neutrals, Greys, Black & White
    (250, 250, 252),  # 112: Pure White
    (230, 230, 235),  # 113: Off-White / Ivory
    (200, 200, 205),  # 114: Light Grey
    (165, 165, 170),  # 115: Silver Cloth
    (130, 130, 135),  # 116: Medium Grey
    (95, 95, 100),    # 117: Slate Grey
    (65, 65, 70),     # 118: Charcoal
    (40, 40, 45),     # 119: Dark Charcoal
    (20, 20, 24),     # 120: Jet Black
    (235, 225, 205),  # 121: Linen / Cream
    (205, 190, 165),  # 122: Canvas / Burlap
    (165, 145, 120),  # 123: Khaki
    (125, 105, 85),   # 124: Mud Grey
    (85, 70, 55),     # 125: Peasant Brown
    (55, 45, 35),     # 126: Dark Mud
    (30, 25, 20),     # 127: Blackened Tunic

    # Row 8: Woods & Natural Shafts
    (225, 190, 135),  # 128: Birch Light
    (195, 155, 95),   # 129: Pine Shaft
    (165, 120, 65),   # 130: Oak Bow
    (130, 90, 45),    # 131: Ash Staff
    (95, 60, 30),     # 132: Walnut Spear
    (65, 40, 20),     # 133: Dark Mahogany
    (40, 25, 12),     # 134: Ebony Wood
    (180, 145, 110),  # 135: Shield Back Wood
    (140, 105, 75),   # 136: Barrel Wood
    (105, 75, 50),    # 137: Weapon Grip
    (75, 50, 35),     # 138: Aged Wood
    (170, 160, 145),  # 139: Driftwood Grey
    (130, 120, 105),  # 140: Weathered Plank
    (90, 80, 70),     # 141: Old Timber
    (210, 175, 120),  # 142: Arrow Shaft
    (150, 110, 60),   # 143: Axe Handle
]

# Pad remaining swatches up to 256 colors
while len(SWATCHES) < 256:
    idx = len(SWATCHES)
    val = (idx * 17) % 255
    SWATCHES.append((val, (val * 2) % 255, (val * 3) % 255))


def create_png_bytes(width: int, height: int, pixels: bytes) -> bytes:
    """Encodes raw RGBA pixels into PNG format using pure python."""
    def chunk(tag: bytes, data: bytes) -> bytes:
        return struct.pack(">I", len(data)) + tag + data + struct.pack(">I", zlib.crc32(tag + data) & 0xFFFFFFFF)

    header = b"\x89PNG\r\n\x1a\n"
    ihdr = chunk(b"IHDR", struct.pack(">IIBBBBB", width, height, 8, 6, 0, 0, 0))

    # Prepend filter byte 0 to each scanline
    scanlines = bytearray()
    row_bytes = width * 4
    for y in range(height):
        scanlines.append(0)  # None filter
        scanlines.extend(pixels[y * row_bytes : (y + 1) * row_bytes])

    compressed = zlib.compress(bytes(scanlines), 9)
    idat = chunk(b"IDAT", compressed)
    iend = chunk(b"IEND", b"")
    return header + ihdr + idat + iend


def generate_palette_atlas(output_path: Path) -> None:
    width = 256
    height = 256
    swatch_size = 16  # 16x16 pixels per swatch -> 16x16 = 256 swatches

    pixels = bytearray(width * height * 4)

    for swatch_idx, (r, g, b) in enumerate(SWATCHES):
        grid_x = swatch_idx % 16
        grid_y = swatch_idx // 16
        start_x = grid_x * swatch_size
        start_y = grid_y * swatch_size

        for sy in range(swatch_size):
            y = start_y + sy
            for sx in range(swatch_size):
                x = start_x + sx
                idx = (y * width + x) * 4
                pixels[idx] = r
                pixels[idx + 1] = g
                pixels[idx + 2] = b
                pixels[idx + 3] = 255

    png_bytes = create_png_bytes(width, height, bytes(pixels))
    output_path.parent.mkdir(parents=True, exist_ok=True)
    output_path.write_bytes(png_bytes)
    print(f"Palette atlas generated at {output_path} ({len(png_bytes)} bytes)")


if __name__ == "__main__":
    root = Path(__file__).resolve().parents[1]
    # Write to Resources for runtime loading
    res_path = root / "UnityClient" / "Assets" / "Resources" / "palette_atlas.png"
    generate_palette_atlas(res_path)
    # Also write to Art/Textures
    art_path = root / "UnityClient" / "Assets" / "Art" / "Textures" / "palette_atlas.png"
    generate_palette_atlas(art_path)
