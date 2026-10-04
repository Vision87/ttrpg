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

        Debug.Log($"WebGL build succeeded: {report.summary.totalSize} bytes");
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
