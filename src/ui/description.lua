return {
    kind = "StaticLib",
    defines { "IMGUI_DISABLE_WIN32_FUNCTIONS", "GLFW_EXPOSE_NATIVE_WIN32", "IMGUI_ENABLE_FREETYPE" },
    links { "opengl32.lib"}
}
