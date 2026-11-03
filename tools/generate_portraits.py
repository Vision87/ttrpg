"""Generate original bundled portrait artwork from the local portrait set."""

from __future__ import annotations

import hashlib
import subprocess
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
SOURCE_DIR = ROOT / "UnityClient" / "ArtSource"
RESOURCE_DIR = ROOT / "UnityClient" / "Assets" / "Resources" / "portrait"

PORTRAITS = [
    {
        "id": "dnd35-dwarf-warden",
        "skin": "#c77f58",
        "hair": "#34231f",
        "cloth": "#54705b",
        "background": "#2b3d39",
        "accent": "#d2ae68",
        "style": "beard",
        "accessory": "circlet",
    },
    {
        "id": "dnd35-elf-scholar",
        "skin": "#e6bd9c",
        "hair": "#b48a4d",
        "cloth": "#485a78",
        "background": "#344254",
        "accent": "#d4c17e",
        "style": "long",
        "accessory": "circlet",
    },
    {
        "id": "dnd35-human-vanguard",
        "skin": "#9d6248",
        "hair": "#241d1c",
        "cloth": "#8b493d",
        "background": "#49322d",
        "accent": "#d49a5d",
        "style": "short",
        "accessory": "scar",
    },
    {
        "id": "dnd35-halfling-scout",
        "skin": "#dfb18a",
        "hair": "#805333",
        "cloth": "#5c7046",
        "background": "#3e4a34",
        "accent": "#d5bc72",
        "style": "curly",
        "accessory": "hood",
    },
    {
        "id": "dark-heresy-frontier-soldier",
        "skin": "#b47b62",
        "hair": "#393638",
        "cloth": "#59645e",
        "background": "#303a3b",
        "accent": "#bca45f",
        "style": "short",
        "accessory": "goggles",
    },
    {
        "id": "dark-heresy-archive-adept",
        "skin": "#d1a183",
        "hair": "#4c2b25",
        "cloth": "#665546",
        "background": "#463d36",
        "accent": "#c4a765",
        "style": "long",
        "accessory": "hood",
    },
    {
        "id": "dark-heresy-voidfarer",
        "skin": "#8e5e4d",
        "hair": "#262526",
        "cloth": "#394e5d",
        "background": "#293b4b",
        "accent": "#8ea7b0",
        "style": "cropped",
        "accessory": "visor",
    },
    {
        "id": "dark-heresy-sanctioned-seer",
        "skin": "#d8b49b",
        "hair": "#b7ad9e",
        "cloth": "#62536a",
        "background": "#403448",
        "accent": "#d0bd7c",
        "style": "beard",
        "accessory": "circlet",
    },
    {
        "id": "expansion-veteran",
        "skin": "#bc8466",
        "hair": "#3e3029",
        "cloth": "#655447",
        "background": "#493d32",
        "accent": "#d1a96c",
        "style": "short",
        "accessory": "scar",
    },
    {
        "id": "expansion-scholar",
        "skin": "#e0b996",
        "hair": "#6d513b",
        "cloth": "#495c70",
        "background": "#354657",
        "accent": "#c8ae72",
        "style": "curly",
        "accessory": "circlet",
    },
    {
        "id": "expansion-wanderer",
        "skin": "#a96f54",
        "hair": "#302622",
        "cloth": "#566148",
        "background": "#3b4839",
        "accent": "#c2a66c",
        "style": "beard",
        "accessory": "hood",
    },
    {
        "id": "expansion-mystic",
        "skin": "#d6ac91",
        "hair": "#493c57",
        "cloth": "#59485f",
        "background": "#3f334b",
        "accent": "#cfbd83",
        "style": "long",
        "accessory": "visor",
    },
]


def _portrait_svg(portrait: dict[str, str]) -> str:
    skin = portrait["skin"]
    hair = portrait["hair"]
    cloth = portrait["cloth"]
    background = portrait["background"]
    accent = portrait["accent"]
    style = portrait["style"]
    accessory = portrait["accessory"]

    hair_shape = {
        "beard": f'<path d="M66 91 Q68 31 128 31 Q188 31 190 96 L178 153 L162 118 L91 121 L76 151 Z" fill="{hair}"/>',
        "long": f'<path d="M63 101 Q61 29 128 29 Q196 29 193 100 L185 190 L164 156 L91 157 L72 191 Z" fill="{hair}"/>',
        "short": f'<path d="M68 92 Q69 30 128 30 Q186 30 188 92 L172 112 L85 111 Z" fill="{hair}"/>',
        "curly": f'<path d="M63 95 Q53 58 79 42 Q81 18 105 30 Q125 14 142 30 Q170 17 179 43 Q204 51 191 94 L174 115 L84 113 Z" fill="{hair}"/>',
        "cropped": f'<path d="M68 89 Q74 35 128 35 Q179 35 188 87 L173 101 L86 101 Z" fill="{hair}"/>',
    }[style]
    beard = (
        f'<path d="M88 156 Q128 183 168 156 Q162 202 128 212 Q94 202 88 156 Z" fill="{hair}"/>'
        if style == "beard"
        else ""
    )
    accessories = {
        "circlet": f'<path d="M77 72 Q128 44 179 72" fill="none" stroke="{accent}" stroke-width="7"/><circle cx="128" cy="58" r="6" fill="{accent}"/>',
        "scar": f'<path d="M153 115 L169 135" stroke="{accent}" stroke-width="3" stroke-linecap="round"/>',
        "hood": f'<path d="M58 120 Q56 34 128 24 Q200 34 198 120 L181 154 L170 91 Q128 53 86 91 L75 154 Z" fill="{cloth}" stroke="{accent}" stroke-width="3"/>',
        "goggles": f'<rect x="81" y="98" width="38" height="22" rx="8" fill="#26353a" stroke="{accent}" stroke-width="4"/><rect x="137" y="98" width="38" height="22" rx="8" fill="#26353a" stroke="{accent}" stroke-width="4"/><path d="M119 107 H137" stroke="{accent}" stroke-width="4"/>',
        "visor": f'<path d="M75 91 Q128 63 181 91 L173 110 Q128 92 83 110 Z" fill="#283a43" stroke="{accent}" stroke-width="4"/>',
    }[accessory]

    return f"""<svg xmlns="http://www.w3.org/2000/svg" width="256" height="320" viewBox="0 0 256 320">
<defs>
  <linearGradient id="backdrop" x1="0" x2="1" y1="0" y2="1">
    <stop offset="0" stop-color="{background}"/>
    <stop offset="1" stop-color="#171a1d"/>
  </linearGradient>
  <linearGradient id="coat" x1="0" x2="1" y1="0" y2="1">
    <stop offset="0" stop-color="{cloth}"/>
    <stop offset="1" stop-color="#25282b"/>
  </linearGradient>
</defs>
<rect width="256" height="320" rx="22" fill="url(#backdrop)"/>
<circle cx="128" cy="122" r="91" fill="none" stroke="{accent}" stroke-opacity=".42" stroke-width="2"/>
<path d="M19 320 Q24 241 82 220 L128 207 L174 220 Q232 241 237 320Z" fill="url(#coat)"/>
<path d="M96 197 H160 V238 Q128 264 96 238Z" fill="{skin}"/>
<path d="M82 112 Q82 68 128 66 Q174 68 174 112 V145 Q171 187 128 200 Q85 187 82 145Z" fill="{skin}"/>
<path d="M70 111 Q68 50 128 48 Q188 50 186 111 L170 91 Q128 67 86 91Z" fill="{hair}"/>
{hair_shape}
<path d="M91 125 Q103 119 114 125 M142 125 Q153 119 165 125" fill="none" stroke="{hair}" stroke-width="5" stroke-linecap="round"/>
<ellipse cx="104" cy="137" rx="5" ry="3" fill="#231e1d"/>
<ellipse cx="152" cy="137" rx="5" ry="3" fill="#231e1d"/>
<path d="M128 138 L121 159 Q128 164 135 159" fill="none" stroke="#925e4b" stroke-width="3" stroke-linecap="round"/>
<path d="M113 174 Q128 181 143 174" fill="none" stroke="#713e3a" stroke-width="4" stroke-linecap="round"/>
{beard}
{accessories}
<path d="M83 231 L128 274 L173 231 L194 248 L166 278 L165 320 H91 L90 278 L62 248Z" fill="{cloth}" stroke="{accent}" stroke-opacity=".8" stroke-width="3"/>
<path d="M111 253 L128 271 L145 253" fill="none" stroke="{accent}" stroke-width="4"/>
<rect x="6" y="6" width="244" height="308" rx="19" fill="none" stroke="{accent}" stroke-opacity=".75" stroke-width="3"/>
</svg>"""


def _meta(guid: str) -> str:
    return f"""fileFormatVersion: 2
guid: {guid}
TextureImporter:
  internalIDToNameTable: []
  externalObjects: {{}}
  serializedVersion: 13
  mipmaps:
    mipMapMode: 0
    enableMipMap: 0
  isReadable: 0
  streamingMipmaps: 0
  streamingMipmapsPriority: 0
  textureSettings:
    serializedVersion: 2
    filterMode: 1
    aniso: 1
    mipBias: 0
    wrapU: 1
    wrapV: 1
    wrapW: 1
  nPOTScale: 1
  maxTextureSize: 512
  textureType: 0
  textureShape: 1
  spriteMode: 0
  alphaIsTransparency: 1
  platformSettings: []
"""


def main() -> None:
    SOURCE_DIR.mkdir(parents=True, exist_ok=True)
    for portrait in PORTRAITS:
        asset_id = portrait["id"]
        source_path = SOURCE_DIR / f"portrait.{asset_id}.svg"
        resource_path = RESOURCE_DIR / f"{asset_id}.png"
        source_path.write_text(_portrait_svg(portrait), encoding="utf-8")
        resource_path.parent.mkdir(parents=True, exist_ok=True)
        subprocess.run(
            [
                "rsvg-convert",
                "--width",
                "256",
                "--height",
                "320",
                str(source_path),
                "--output",
                str(resource_path),
            ],
            check=True,
        )
        guid = hashlib.sha256(
            resource_path.relative_to(ROOT).as_posix().encode("utf-8")
        ).hexdigest()[:32]
        resource_path.with_suffix(".png.meta").write_text(
            _meta(guid), encoding="utf-8"
        )


if __name__ == "__main__":
    main()
