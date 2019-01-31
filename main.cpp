#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

int main()
{
	if (!glfwInit()) {
		std::cerr << "Error: glfw init failed." << std::endl;
		return 3;
	}
	GLFWwindow* window = nullptr;
	window = glfwCreateWindow(300, 200, "Shader test", nullptr, nullptr);
	if (window == nullptr) {
		std::cerr << "Error: window is null." << std::endl;
		glfwTerminate();
		return 1;
	}
	glfwMakeContextCurrent(window);

	const auto glewOk = glewInit();
	if (glewOk != GLEW_OK) {
		std::cerr << "Error: glew not OK." << std::endl;
		glfwTerminate();
		return 2;
	}

	GLint maxVertexUniformVectors = 0;
	glGetIntegerv(GL_MAX_VERTEX_UNIFORM_VECTORS, &maxVertexUniformVectors);
	std::cout << "Max vertex uniform vectors: " << maxVertexUniformVectors << std::endl;
	glfwMakeContextCurrent(nullptr);
	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}
