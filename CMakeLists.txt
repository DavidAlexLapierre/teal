cmake_minimum_required(VERSION 3.12)  # Minimum CMake version required

project(teal)  # Replace "YourProjectName" with the name of your project

# Set C++ standard to C++20
set(CMAKE_CXX_STANDARD 20)

# Add executable target
add_executable(teal src/main.cpp)  # Replace "main.cpp" with your main source file

target_include_directories(teal PRIVATE ./src/)

