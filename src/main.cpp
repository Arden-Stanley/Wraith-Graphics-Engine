#include "Application.h"
#include <iostream>

int main() {
  std::cout << "Engine Starting..." << std::endl;
  Wraith::Application app;
  std::cout << "Engine Initialized..." << std::endl;
  app.Run();
  std::cout << "Engine Closing..." << std::endl;
  return 0;
}
