"""Serve the Unity WebGL build with the headers required by compressed assets."""

from __future__ import annotations

import argparse
import json
import mimetypes
from functools import partial
from http.server import SimpleHTTPRequestHandler, ThreadingHTTPServer
from pathlib import Path
import sys
from typing import Any

PROJECT_ROOT = Path(__file__).resolve().parent.parent
if str(PROJECT_ROOT) not in sys.path:
    sys.path.insert(0, str(PROJECT_ROOT))

from clients.creation_service import CharacterCreationApplication


class UnityWebGLHandler(SimpleHTTPRequestHandler):
    def send_head(self):
        if "If-Modified-Since" in self.headers:
            del self.headers["If-Modified-Since"]
        return super().send_head()

    def guess_type(self, path: str) -> str:
        if path.endswith(".wasm.gz"):
            return "application/wasm"
        if path.endswith(".js.gz"):
            return "application/javascript"
        if path.endswith(".gz"):
            return "application/octet-stream"
        if path.endswith(".wasm"):
            return "application/wasm"
        return super().guess_type(path)

    def end_headers(self) -> None:
        path = self.translate_path(self.path)
        if path.endswith(".gz"):
            self.send_header("Content-Encoding", "gzip")
        self.send_header("Cache-Control", "no-store, no-cache, must-revalidate")
        super().end_headers()


class CharacterServiceWebGLHandler(UnityWebGLHandler):
    def __init__(
        self,
        *args: Any,
        application: CharacterCreationApplication,
        **kwargs: Any,
    ) -> None:
        self.application = application
        super().__init__(*args, **kwargs)

    def do_GET(self) -> None:
        if self.path.startswith("/api/"):
            self._handle_api("GET")
            return
        super().do_GET()

    def do_POST(self) -> None:
        self._handle_api("POST")

    def do_PUT(self) -> None:
        self._handle_api("PUT")

    def _handle_api(self, method: str) -> None:
        if not self.path.startswith("/api/"):
            self.send_error(404)
            return
        try:
            content_length = int(self.headers.get("Content-Length", "0"))
        except ValueError:
            self._write_json(400, {"error": {"code": "invalid-content-length"}})
            return
        if content_length < 0:
            self._write_json(400, {"error": {"code": "invalid-content-length"}})
            return
        if content_length > 1_048_576:
            self._write_json(413, {"error": {"code": "request-too-large"}})
            return

        payload: dict[str, Any] | None = None
        if content_length:
            try:
                decoded = json.loads(self.rfile.read(content_length).decode("utf-8"))
            except (UnicodeDecodeError, json.JSONDecodeError):
                self._write_json(400, {"error": {"code": "invalid-json"}})
                return
            if not isinstance(decoded, dict):
                self._write_json(400, {"error": {"code": "json-object-required"}})
                return
            payload = decoded
        status, response = self.application.handle(method, self.path, payload)
        self._write_json(status, response)

    def _write_json(self, status: int, response: dict[str, Any]) -> None:
        encoded = json.dumps(response, sort_keys=True).encode("utf-8")
        self.send_response(status)
        self.send_header("Content-Type", "application/json; charset=utf-8")
        self.send_header("Content-Length", str(len(encoded)))
        self.send_header("Cache-Control", "no-store")
        self.send_header("X-Content-Type-Options", "nosniff")
        self.end_headers()
        self.wfile.write(encoded)


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--directory", default="UnityClient/Build/WebGL")
    parser.add_argument("--port", type=int, default=8000)
    parser.add_argument(
        "--data-directory",
        default=str(Path.home() / ".universal-rpg-board" / "data"),
    )
    args = parser.parse_args()

    application = CharacterCreationApplication(
        PROJECT_ROOT,
        Path(args.data_directory).expanduser(),
    )
    handler = partial(
        CharacterServiceWebGLHandler,
        directory=args.directory,
        application=application,
    )
    server = ThreadingHTTPServer(("127.0.0.1", args.port), handler)
    print(
        f"Serving {args.directory} and character service at "
        f"http://127.0.0.1:{args.port}",
        flush=True,
    )
    server.serve_forever()


if __name__ == "__main__":
    main()
