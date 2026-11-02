import http.server
import socketserver
import os
import mimetypes

class GzipHTTPRequestHandler(http.server.SimpleHTTPRequestHandler):
    """Serve files with proper gzip handling for *.gz assets.
    - Adds `Content-Encoding: gzip` for any .gz request.
    - Sets `Content-Type` based on the original filename (without .gz).
    """
    def send_head(self):
        # If the request is for a .gz file, manually construct headers
        if self.path.endswith('.gz'):
            full_path = self.translate_path(self.path)
            if os.path.isfile(full_path):
                self.send_response(200)
                # Guess MIME type based on uncompressed filename
                mime_type, _ = mimetypes.guess_type(self.path[:-3])
                mime_type = mime_type or 'application/octet-stream'
                self.send_header('Cache-Control', 'no-store')
                self.send_header('Content-Type', mime_type)
                self.send_header('Content-Encoding', 'gzip')
                self.send_header('Content-Length', os.path.getsize(full_path))
                self.end_headers()
                return open(full_path, 'rb')
            else:
                return self.send_error(404, "File not found")
        # Default handling for non‑gz files
        return super().send_head()

if __name__ == '__main__':
    port = 8080
    # Serve from the Unity WebGL build folder
    os.chdir(os.path.join(os.getcwd(), 'UnityClient', 'Build', 'WebGL'))
    with socketserver.TCPServer(('', port), GzipHTTPRequestHandler) as httpd:
        print(f'Serving Unity WebGL build at http://0.0.0.0:{port}')
        httpd.serve_forever()
