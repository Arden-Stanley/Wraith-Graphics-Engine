#include "Renderer.h"

namespace Wraith {
Renderer::Renderer() : vbo_(0) {
  float vertices[] = {
      -0.5f, -0.5f, 0.0f, // 1
      0.5f,  -0.5f, 0.0f, // 2
      0.0f,  0.5f,  0.0f  // 3
  };
  glGenBuffers(1, &vbo_);
  glBindBuffer(GL_ARRAY_BUFFER, vbo_);
  glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
}
} // namespace Wraith
