#pragma once

#include <ui/IUpdatable.hpp>
#include <ui/Theme.hpp>

struct GLFWwindow;

namespace ui {
// A native window that has core opengl & imgui context.
class GlfwImguiWindow : IUpdatable {
  protected:
    GLFWwindow * window = nullptr;

  public:
    GlfwImguiWindow(const char * title,
                    const int    width  = -1, // Specify -1 to use the 
                    const int    height = -1, // current desktop resolution.
                    const bool   vsync  = true,
                    Theme        theme  = Theme::system);

    virtual ~GlfwImguiWindow();
    // Override for your logic
    virtual void onInit() = 0;
    virtual void onUpdate() = 0;
    void         run_until_exit();
};
}
