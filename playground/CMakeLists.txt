cmake_minimum_required(VERSION 2.8.11)

# Program's name
set(BIN playground)

# Make compiler aware of local headers and dependencies
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Source files to use in the playground
set(SRC
    main.cpp)

# Add executable to compile and link dependencies
add_executable(${BIN} ${SRC})
target_link_libraries(${BIN}
    ${OPENGL_LIBRARIES}
    ${GLEW_LIBRARIES}
    ${GLUT_LIBRARY}
    ${GLFW_LIBRARY})
