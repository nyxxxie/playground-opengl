#include <stdio.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

int main(int argc, char* argv[])
{
    GLFWwindow* window;

    /* Init glfw */
    if (!glfwInit()) {
        printf("Failed to initialize GLEW.\n");
        return 1;
    }
    printf("Initialized GLFW.\n");

    /* Create window */
    glfwWindowHint(GLFW_SAMPLES, 4);               // 4x antialiasing
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3); // We want OpenGL 3.3
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE); // We don't want the old OpenGL
    window = glfwCreateWindow(1024, 768, "Playground", NULL, NULL);
    if (window == NULL) {
        printf("Failed to open GLFW window.\n");
        glfwTerminate();
        return 1;
    }
    printf("Created window.\n");

    /* Initialize glew */
    glfwMakeContextCurrent(window);
    glewExperimental=true;
    if (glewInit() != GLEW_OK) {
        printf("Failed to initialize GLEW.\n");
        return 1;
    }
    printf("Initialized GLEW.\n");

    /* Capture input */
    glfwSetInputMode(window, GLFW_STICKY_KEYS, GL_TRUE);
    do {
        glfwSwapBuffers(window);
        glfwPollEvents();
    } while (glfwGetKey(window, GLFW_KEY_ESCAPE) != GLFW_PRESS &&
             !glfwWindowShouldClose(window));

    return 0;
}
