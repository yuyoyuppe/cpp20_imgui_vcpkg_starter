#pragma once
#include "GlfwImguiWindow.hpp"

#include "detail/window.hpp"

struct GLFWwindow;

namespace ui {
GlfwImguiWindow::GlfwImguiWindow(const char * title, const int width, const int height, const bool vsync, Theme theme)
  : window{detail::create(width, height, title, vsync, theme)} {}

GlfwImguiWindow::~GlfwImguiWindow() { detail::shutdown(window); }

void GlfwImguiWindow::run_until_exit() {
    onInit();
    detail::run_until_exit(window, this);
}

}