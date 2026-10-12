import json
import threading
from functools import partial
from http.server import ThreadingHTTPServer
from pathlib import Path
from tempfile import TemporaryDirectory
from urllib.error import HTTPError
from urllib.request import Request, urlopen

from clients.creation_service import CharacterCreationApplication
from tools.serve_webgl import CharacterServiceWebGLHandler


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
