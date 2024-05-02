ps = require 'deps.premake_scaffold'
workspace "MyImguiApp"

ps.generate({"glfw3", "imgui"})
