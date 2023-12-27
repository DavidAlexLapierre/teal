cmake_minimum_required(VERSION 3.12)  # Minimum CMake version required

project(teal)  # Replace "YourProjectName" with the name of your project

# Set C++ standard to C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Add executable target
add_executable(teal 
    src/main.cpp
    src/cmd/help.cpp
    src/utils/logger.cpp
    src/cmdParser.cpp
)

add_compile_definitions(WINDOWS)

target_include_directories(teal PRIVATE src)
target_compile_definitions(teal PRIVATE WINDOWS)

