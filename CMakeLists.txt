# Minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(SimpleProject VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(${PROJECT_SOURCE_DIR}/vender)

# Add the executable
add_executable(SimpleExecutable main.cpp)

# Specify the path to the BlackLib include directory
include_directories(vender/BlackLib/v3_0)

# Specify the path to the BlackLib source files or the compiled library
# Assuming you have compiled BlackLib into a static library named libBlackLib.a
target_link_libraries(SimpleExecutable BlackLib)
