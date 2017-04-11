cmake_minimum_required(VERSION 2.8.11)

# Add our cmake directory to module path
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR}/cmake)

# Find required dependencies
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
find_package(GLFW REQUIRED)
find_package(GLEW REQUIRED)

# Make compiler aware of dependency headers
include_directories(
    ${OPENGL_INCLUDE_DIRS}
    ${GLUT_INCLUDE_DIRS}
    ${GLFW_INCLUDE_DIRS})

# Process the playground
add_subdirectory(playground)
