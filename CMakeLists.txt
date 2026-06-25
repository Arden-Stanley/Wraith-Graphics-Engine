cmake_minimum_required(VERSION 3.25)

project(wraith)

add_executable(wraith src/main.cpp)

add_subdirectory(lib/glfw-3.4)
add_subdirectory(lib/glad)

target_link_libraries(wraith glfw)
target_link_libraries(wraith glad)
