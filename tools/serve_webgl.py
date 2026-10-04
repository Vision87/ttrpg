"""Serve the Unity WebGL build with the headers required by compressed assets."""

from __future__ import annotations

import argparse
import mimetypes
from functools import partial
from http.server import SimpleHTTPRequestHandler, ThreadingHTTPServer


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


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--directory", default="UnityClient/Build/WebGL")
    parser.add_argument("--port", type=int, default=8000)
    args = parser.parse_args()

    handler = partial(UnityWebGLHandler, directory=args.directory)
    server = ThreadingHTTPServer(("127.0.0.1", args.port), handler)
    print(f"Serving {args.directory} at http://127.0.0.1:{args.port}", flush=True)
    server.serve_forever()


if __name__ == "__main__":
    main()
