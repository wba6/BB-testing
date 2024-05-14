cmake_minimum_required(VERSION 3.10)
project(BlackLib VERSION 1.0)

# Add all source files in the BlackLib directory
file(GLOB_RECURSE SOURCES "BlackLib/v3_0/*.cpp")

# Include headers in the BlackLib directory
include_directories(BlackLib)

# Create a library from the source files
add_library(BlackLib STATIC ${SOURCES})

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#NOTE TEMPARAY SOLUTION FOR BLACKLIB