#pragma once

#include "GraphicsSystem.h"
#include <iostream>
#include <memory>

namespace Wraith {
class Application {
public:
  Application();
  void Run() const;

private:
  std::unique_ptr<GraphicsSystem> m_graphicsSystem;
};
} // namespace Wraith
