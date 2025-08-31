cmake_minimum_required(VERSION 3.10)   # Minimum CMake version
project(clue_test VERSION 1.0)         # Project name + version

set(CMAKE_CXX_STANDARD 17)             # Use C++17
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add executable from sources
add_executable(myprog src/main.cpp src/foo.cpp)

# Add include directories
target_include_directories(myprog PRIVATE include)
