import json
import threading
from functools import partial
from http.server import ThreadingHTTPServer
from pathlib import Path
import struct
from tempfile import TemporaryDirectory
from urllib.error import HTTPError
from urllib.request import Request, urlopen
import zlib

from clients.creation_service import CharacterCreationApplication
from clients.portrait_generation import GeneratedImage
from tools.serve_webgl import CharacterServiceWebGLHandler


def _png_image() -> bytes:
    def chunk(name: bytes, data: bytes) -> bytes:
        content = name + data
        return (
            struct.pack(">I", len(data))
            + content
            + struct.pack(">I", zlib.crc32(content) & 0xFFFFFFFF)
        )

    return (
        b"\x89PNG\r\n\x1a\n"
        + chunk(b"IHDR", struct.pack(">2I5B", 1, 1, 8, 2, 0, 0, 0))
        + chunk(b"IDAT", zlib.compress(b"\x00\x00\x00\x00"))
        + chunk(b"IEND", b"")
    )


def test_webgl_server_serves_api_static_files_and_gzip_headers() -> None:
    with TemporaryDirectory() as directory:
        root = Path(directory)
        (root / "index.html").write_text("<html>demo</html>")
        (root / "app.js.gz").write_bytes(b"compressed")
        app = CharacterCreationApplication(Path.cwd(), root / "data")
        handler = partial(
            CharacterServiceWebGLHandler,
            directory=str(root),
            application=app,
        )
        server = ThreadingHTTPServer(("127.0.0.1", 0), handler)
        thread = threading.Thread(target=server.serve_forever, daemon=True)
        thread.start()
        base_url = f"http://127.0.0.1:{server.server_port}"
        try:
            with urlopen(f"{base_url}/api/rulesets") as response:
                rulesets = json.loads(response.read())
                assert response.status == 200
                assert len(rulesets["rulesets"]) == 2

            with urlopen(f"{base_url}/") as response:
                assert response.read() == b"<html>demo</html>"

            with urlopen(f"{base_url}/app.js.gz") as response:
                assert response.headers["Content-Encoding"] == "gzip"
                assert response.headers["Content-Type"] == "application/javascript"

            request = Request(
                f"{base_url}/api/drafts",
                data=b"{broken",
                headers={"Content-Type": "application/json"},
                method="POST",
            )
            try:
                urlopen(request)
            except HTTPError as error:
                assert error.code == 400
                assert json.loads(error.read())["error"]["code"] == "invalid-json"
            else:
                raise AssertionError("expected malformed JSON request to fail")
        finally:
            server.shutdown()
            server.server_close()
            thread.join(timeout=2)


def test_webgl_portrait_image_route_returns_only_stored_image_bytes() -> None:
    class Generator:
        def configuration_payload(self) -> dict:
            return {
                "comfyui_configured": True,
                "comfyui_destination": "http://127.0.0.1:8188",
                "comfyui_workflow": "portrait.json",
                "comfyui_model": "",
                "ollama_enabled": False,
                "ollama_destination": "",
                "ollama_model": "",
            }

        def generate(self, workflow, description: str):
            return (
                GeneratedImage(
                    _png_image(),
                    "image/png",
                    "portrait.json",
                    None,
                ),
                {"source": "ComfyUI", "source_terms": "not supplied"},
            )

    with TemporaryDirectory() as directory:
        root = Path(directory)
        app = CharacterCreationApplication(Path.cwd(), root / "data", Generator())
        handler = partial(
            CharacterServiceWebGLHandler,
            directory=str(root),
            application=app,
        )
        server = ThreadingHTTPServer(("127.0.0.1", 0), handler)
        thread = threading.Thread(target=server.serve_forever, daemon=True)
        thread.start()
        base_url = f"http://127.0.0.1:{server.server_port}"
        try:
            create = Request(
                f"{base_url}/api/drafts",
                data=b'{"ruleset_id":"dnd35-core","name":"Binary portrait"}',
                headers={"Content-Type": "application/json"},
                method="POST",
            )
            with urlopen(create) as response:
                draft_id = json.loads(response.read())["draft"]["id"]

            generate = Request(
                f"{base_url}/api/drafts/{draft_id}/portrait-candidates",
                data=b'{"description":""}',
                headers={"Content-Type": "application/json"},
                method="POST",
            )
            with urlopen(generate) as response:
                generated = json.loads(response.read())
            candidate = generated["portrait_generation"]["candidate"]

            with urlopen(base_url + candidate["image_url"]) as response:
                image = response.read()
                assert response.status == 200
                assert response.headers["Content-Type"] == "image/png"
                assert response.headers["X-Content-Type-Options"] == "nosniff"
                assert image == _png_image()

            apply_candidate = Request(
                f"{base_url}/api/drafts/{draft_id}/portrait-candidates/"
                f"{candidate['candidate_id']}/apply",
                data=b"{}",
                headers={"Content-Type": "application/json"},
                method="POST",
            )
            with urlopen(apply_candidate) as response:
                applied = json.loads(response.read())
            applied_portrait = applied["portrait_generation"]["applied"]
            with urlopen(base_url + applied_portrait["image_url"]) as response:
                assert response.status == 200
                assert response.headers["Content-Type"] == "image/png"
                assert response.read() == _png_image()

            unsafe = (
                f"{base_url}/api/drafts/{draft_id}/portrait-candidates/"
                "..%2F..%2Fetc%2Fpasswd/image"
            )
            try:
                urlopen(unsafe)
            except HTTPError as error:
                assert error.code in {400, 404}
            else:
                raise AssertionError("expected unsafe portrait reference to fail")
        finally:
            server.shutdown()
            server.server_close()
            thread.join(timeout=2)
