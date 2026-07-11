#include "Window.h"

namespace Wraith {
Window::Window(WindowConfig config) : config_(config), handle_(nullptr) {

  if (!glfwInit()) {
    std::cout << "Error: Could Not Initialize GLFW..." << std::endl;
  };

  handle_ = glfwCreateWindow(config_.windowWidth, config_.windowHeight,
                             config_.title.c_str(), NULL, NULL);
  glfwMakeContextCurrent(handle_);
  if (!handle_) {
    std::cout << "Error: Could Not Create Window..." << std::endl;
  }

  if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
    std::cout << "Error: Could Not Initialize GLAD..." << std::endl;
  }
}

void Window::Update() const {
  glClear(GL_COLOR_BUFFER_BIT);
  glfwPollEvents();
  glfwSwapBuffers(handle_);
}

bool Window::IsClosing() const { return glfwWindowShouldClose(handle_); }

} // namespace Wraith
