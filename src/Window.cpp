#include "Window.h"

namespace Wraith {
Window::Window(WindowConfig config) : m_config(config), m_handle(nullptr) {
  m_handle = glfwCreateWindow(m_config.windowWidth, m_config.windowHeight,
                              m_config.title.c_str(), NULL, NULL);
}

void Window::Update() const {
  glfwPollEvents();
  glfwSwapBuffers(m_handle);
}

bool Window::IsClosing() const { return glfwWindowShouldClose(m_handle); }

} // namespace Wraith
