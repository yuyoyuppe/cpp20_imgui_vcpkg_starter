ps = require 'deps.premake_scaffold'
workspace "MyImguiApp"

-- Unicode support, see https://github.com/ocornut/imgui/blob/master/docs/FONTS.md#about-utf-8-encoding
buildoptions {"/utf-8", "/Zc:char8_t-"}

ps.generate({"glfw3", "imgui"})
