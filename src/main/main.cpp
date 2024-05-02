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
