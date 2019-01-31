cmake_minimum_required(VERSION 3.12)
project(max_vertex_uniforms)

if(EMSCRIPTEN)
	set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -s USE_GLFW=3")
endif()

set(CMAKE_CXX_STANDARD 17)
add_compile_options(-Wall -Wextra)

add_executable(max_vertex_uniforms main.cpp)
target_link_libraries(max_vertex_uniforms GL glfw GLEW)
