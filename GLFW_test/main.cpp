#include "glad.h"
#include <GLFW/glfw3.h>
#include <iostream>
#include <math.h>

int main(void)
{
    glfwInit();

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR,3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR,3);
    glfwWindowHint(GLFW_OPENGL_PROFILE , GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow *window = glfwCreateWindow(800 , 800 , "I Made This" , NULL , NULL);
    if (window == NULL)
    {
        std::cout << "Failed to create window" << std::endl;
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    gladLoadGL();
    glViewport(0,0,800,800);

    
    
    glClearColor(1.0f , 0.37f , 0.07f , 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    
    float prev_time = float(glfwGetTime());
    float angle = 0.0f;

    while (!glfwWindowShouldClose(window))
    {
        float time = float(glfwGetTime());
        if (time - prev_time >= 0.1f)
        {
            angle += 0.1f;
            prev_time = time;
        }
        glClearColor(float(sin(angle)) , float(cos(angle)) , float(tan(angle)), 1.0f);

        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(window);     
        
        glfwPollEvents();
    }
    


    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}