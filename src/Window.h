#pragma once
#include <glad/glad.h>

#include <GLFW/glfw3.h>
#include <iostream>
#include <string>

namespace Wraith {

typedef struct t_WindowConfig {
  std::string title;
  int windowWidth;
  int windowHeight;
} WindowConfig;

class Window {
public:
  Window(WindowConfig config);
  void Update() const;
  bool IsClosing() const;

private:
  WindowConfig m_config;
  GLFWwindow *m_handle;
};

} // namespace Wraith
