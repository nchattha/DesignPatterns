cmake_minimum_required(VERSION 3.13)  # CMake version check
project(simple_example)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

# Add main.cpp file of project root directory as source file
set(SOURCE_FILES src/FactoryPattern.cpp src/IMAGEDocument.cpp src/XMLDocument.cpp)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(FDP ${SOURCE_FILES})