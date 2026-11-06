using System.IO;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;
using UnityEngine.SceneManagement;

public static class WebGLBuild
{
    public static void Build()
    {
        const string scenePath = "Assets/Scenes/Runtime.unity";
        Directory.CreateDirectory("Assets/Scenes");

        if (!File.Exists(scenePath))
        {
            var scene = EditorSceneManager.NewScene(
                NewSceneSetup.DefaultGameObjects,
                NewSceneMode.Single);
            EditorSceneManager.SaveScene(scene, scenePath);
        }

        var outputPath = GetOutputPath();
        Directory.CreateDirectory(Path.GetDirectoryName(outputPath));
        var report = BuildPipeline.BuildPlayer(
            new[] { scenePath },
            outputPath,
            BuildTarget.WebGL,
            BuildOptions.None);

        if (report.summary.result != UnityEditor.Build.Reporting.BuildResult.Succeeded)
        {
            throw new System.Exception(
                $"WebGL build failed: {report.summary.result}");
        }

        ConfigureResponsiveCanvas(outputPath);
        Debug.Log($"WebGL build succeeded: {report.summary.totalSize} bytes");
    }

    private static void ConfigureResponsiveCanvas(string outputPath)
    {
        var indexPath = Path.Combine(outputPath, "index.html");
        var stylePath = Path.Combine(outputPath, "TemplateData", "style.css");
        if (!File.Exists(indexPath) || !File.Exists(stylePath))
        {
            throw new FileNotFoundException(
                "The WebGL template output is missing its index or stylesheet.");
        }

        const string scriptMarker =
            "      var script = document.createElement(\"script\");";
        string html = File.ReadAllText(indexPath);
        if (!html.Contains("name=\"viewport\""))
        {
            const string headMarker = "  <head>";
            if (!html.Contains(headMarker))
            {
                throw new System.Exception(
                    "The WebGL template changed; viewport setup could not be applied.");
            }
            html = html.Replace(
                headMarker,
                headMarker +
                    "\n    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, user-scalable=no\">");
        }
        if (!html.Contains(scriptMarker))
        {
            throw new System.Exception(
                "The WebGL template changed; responsive canvas setup could not be applied.");
        }
        const string responsiveSetup =
            "      config.devicePixelRatio = 1;\n" +
            "      var resizeUnityCanvas = function() {\n" +
            "        fullscreenContainer.style.width = window.innerWidth + \"px\";\n" +
            "        fullscreenContainer.style.height = window.innerHeight + \"px\";\n" +
            "      };\n" +
            "      resizeUnityCanvas();\n" +
            "      window.addEventListener(\"resize\", resizeUnityCanvas);\n\n";
        html = html.Replace(scriptMarker, responsiveSetup + scriptMarker);
        File.WriteAllText(indexPath, html);

        const string responsiveStyles =
            "\nhtml, body { width: 100%; height: 100%; overflow: hidden; }\n" +
            "#unity-container, #unity-container.unity-desktop { position: fixed; left: 0; top: 0; width: 100vw; height: 100vh; transform: none; }\n" +
            "#unity-fullscreen-container, #unity-canvas { width: 100%; height: 100%; }\n" +
            "#unity-footer { display: none; }\n";
        File.AppendAllText(stylePath, responsiveStyles);
    }

    private static string GetOutputPath()
    {
        var arguments = System.Environment.GetCommandLineArgs();
        for (var index = 0; index < arguments.Length - 1; index++)
        {
            if (arguments[index] == "-buildOutput")
            {
                return arguments[index + 1];
            }
        }

        return "Build/WebGL";
    }
}
