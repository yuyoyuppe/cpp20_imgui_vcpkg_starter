#pragma once

#include <ui/IUpdatable.hpp>
#include <ui/Theme.hpp>

struct GLFWwindow;

namespace ui::detail {

GLFWwindow * create(const int width, const int height, const char * title, const bool vsync, Theme theme);
void         shutdown(GLFWwindow *);

void run_until_exit(GLFWwindow *, IUpdatable * updatable);
}