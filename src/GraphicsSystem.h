#pragma once

#include "Window.h"
#include <memory>

namespace Wraith {
class GraphicsSystem {
public:
  GraphicsSystem();
  void Update() const;
  const Window &GetWindow() const;

private:
  std::unique_ptr<Window> window_;
};
} // namespace Wraith
