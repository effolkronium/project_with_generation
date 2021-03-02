project(project_with_generation)
cmake_minimum_required(VERSION 2.9.0)

include_directories("${PROJECT_SOURCE_DIR}/generation")

add_executable(${PROJECT_NAME} main.cpp)