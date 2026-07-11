#include "GraphicsSystem.h"

namespace Wraith {
GraphicsSystem::GraphicsSystem() : window_(nullptr) {
  window_ = std::make_unique<Window>(WindowConfig(
      {.title = "Test", .windowWidth = 1000, .windowHeight = 800}));
}

void GraphicsSystem::Update() const { window_->Update(); }

const Window &GraphicsSystem::GetWindow() const { return *window_; }
} // namespace Wraith
