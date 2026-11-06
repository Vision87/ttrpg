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
from urllib.parse import urlsplit

PROJECT_ROOT = Path(__file__).resolve().parent.parent
if str(PROJECT_ROOT) not in sys.path:
    sys.path.insert(0, str(PROJECT_ROOT))

from clients.creation_service import CharacterCreationApplication
from clients.portrait_generation import (
    ComfyUIWorkflowClient,
    OllamaPromptRefiner,
    PortraitGenerationService,
)


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
            api_path = urlsplit(self.path).path
            if api_path.endswith("/image") and (
                api_path.startswith("/api/drafts/")
                or api_path.startswith("/api/portraits/generated/")
            ):
                self._handle_image()
                return
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

    def _handle_image(self) -> None:
        status, content, content_type = self.application.handle_image(
            "GET",
            self.path,
        )
        self.send_response(status)
        self.send_header("Content-Type", content_type)
        self.send_header("Content-Length", str(len(content)))
        self.send_header("Cache-Control", "no-store")
        self.send_header("X-Content-Type-Options", "nosniff")
        self.end_headers()
        if content:
            self.wfile.write(content)

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
    parser.add_argument(
        "--comfyui-url",
        default="http://127.0.0.1:8188",
        help="ComfyUI server URL (default: http://127.0.0.1:8188)",
    )
    parser.add_argument(
        "--comfyui-workflow",
        type=Path,
        help="Path to a ComfyUI API-export workflow containing the prompt placeholder",
    )
    parser.add_argument(
        "--comfyui-model",
        help="Optional provenance label for the image model/checkpoint",
    )
    parser.add_argument(
        "--comfyui-terms",
        help="Optional source or usage terms supplied for the ComfyUI model/workflow",
    )
    parser.add_argument(
        "--comfyui-timeout",
        type=float,
        default=600.0,
        help="Maximum seconds to wait for ComfyUI output",
    )
    parser.add_argument(
        "--ollama-url",
        default="http://127.0.0.1:11434",
        help="Optional Ollama server URL",
    )
    parser.add_argument(
        "--ollama-model",
        help="Optional Ollama model used to refine the visual prompt",
    )
    parser.add_argument(
        "--ollama-terms",
        help="Optional source or usage terms supplied for the Ollama model",
    )
    args = parser.parse_args()

    portrait_generation = PortraitGenerationService(
        ComfyUIWorkflowClient(
            args.comfyui_url,
            args.comfyui_workflow,
            model_name=args.comfyui_model,
            timeout_seconds=args.comfyui_timeout,
        ),
        (
            OllamaPromptRefiner(args.ollama_url, args.ollama_model)
            if args.ollama_model
            else None
        ),
        comfyui_terms=args.comfyui_terms,
        ollama_terms=args.ollama_terms,
    )
    application = CharacterCreationApplication(
        PROJECT_ROOT,
        Path(args.data_directory).expanduser(),
        portrait_generation,
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
