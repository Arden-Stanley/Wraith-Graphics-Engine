#include "Window.h"

namespace Wraith {
Window::Window(WindowConfig config) : m_config(config), m_handle(nullptr) {

  if (!glfwInit()) {
    std::cout << "Error: Could Not Initialize GLFW..." << std::endl;
  };

  m_handle = glfwCreateWindow(m_config.windowWidth, m_config.windowHeight,
                              m_config.title.c_str(), NULL, NULL);
  glfwMakeContextCurrent(m_handle);
  if (!m_handle) {
    std::cout << "Error: Could Not Create Window..." << std::endl;
  }

  if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
    std::cout << "Error: Could Not Initialize GLAD..." << std::endl;
  }
}

void Window::Update() const {
  glClear(GL_COLOR_BUFFER_BIT);
  glfwPollEvents();
  glfwSwapBuffers(m_handle);
}

bool Window::IsClosing() const { return glfwWindowShouldClose(m_handle); }

} // namespace Wraith
