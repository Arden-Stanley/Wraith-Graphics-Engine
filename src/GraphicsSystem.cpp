#include "GraphicsSystem.h"

namespace Wraith {
GraphicsSystem::GraphicsSystem() : m_window(nullptr) {
  m_window = std::make_unique<Window>(WindowConfig(
      {.title = "Test", .windowWidth = 1000, .windowHeight = 800}));
}

void GraphicsSystem::Start() const {
  while (!(m_window->IsClosing())) {
    m_window->Update();
  }
}
} // namespace Wraith
