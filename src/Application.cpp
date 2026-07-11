#include "Application.h"

namespace Wraith {
Application::Application() : m_graphicsSystem(nullptr) {
  m_graphicsSystem = std::make_unique<GraphicsSystem>();
}

void Application::Run() const { m_graphicsSystem->Start(); }

} // namespace Wraith
