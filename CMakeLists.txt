# Minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(SampleProgram VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(${PROJECT_SOURCE_DIR}/vender)

# Add the executable
add_executable(SampleProgram main.cpp)

# Specify the path to the BlackLib include directory
include_directories(vender/BlackLib/v3_0)

#link BlackLib
target_link_libraries(SampleProgram BlackLib)

# Demo run command
add_custom_target(run
        COMMENT "Run Program"
        COMMAND $<TARGET_FILE:SampleProgram> 
        DEPENDS SampleProgram
        USES_TERMINAL
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)
