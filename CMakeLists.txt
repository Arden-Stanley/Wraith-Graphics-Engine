cmake_minimum_required(VERSION 3.25)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(wraith)

add_executable(wraith src/main.cpp src/Application.cpp src/Window.cpp)

add_subdirectory(lib/glfw-3.4)
add_subdirectory(lib/glad)

target_link_libraries(wraith glfw)
target_link_libraries(wraith glad)
