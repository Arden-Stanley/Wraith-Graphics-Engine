#pragma once

#include "Window.h"
#include <memory>

namespace Wraith {
class GraphicsSystem {
public:
  GraphicsSystem();
  void Start() const;

private:
  std::unique_ptr<Window> m_window;
};
} // namespace Wraith
