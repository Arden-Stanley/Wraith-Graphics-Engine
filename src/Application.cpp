#include "Application.h"

namespace Wraith {
Application::Application() : graphicsSystem_(nullptr) {
  graphicsSystem_ = std::make_unique<GraphicsSystem>();
}

void Application::Run() const {
  while (!(graphicsSystem_->GetWindow().IsClosing())) {
    graphicsSystem_->Update();
  }
}

} // namespace Wraith
