# Description
Create imgui-based apps using C++20 and vcpkg dependencies with ease.

- glfw + imgui + opengl 3.2 core profile
- https://github.com/yuyoyuppe/premake_scaffold
- https://github.com/chromium/vs-chromium search index
- clang-format 

# Example

```cpp
#include "imgui.h"

#include <ui/GlfwImguiWindow.hpp>

struct MainWindow : public ui::GlfwImguiWindow {
    using GlfwImguiWindow::GlfwImguiWindow;

    bool show_demo_window = true;

    void onInit() override {
        auto & io = ImGui::GetIO();

        io.FontAllowUserScaling = true;
    }

    void onUpdate() override {
        if(show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    }
};

int main(int, char **) {
    MainWindow window{"Main window"};
    window.run_until_exit();
    return 0;
}
```