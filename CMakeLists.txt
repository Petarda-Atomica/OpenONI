# Specify the minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(OpenONI VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Find all source and header files
file(GLOB_RECURSE SOURCES "src/*.cpp" "src/*.h")

# Add an executable target
add_executable(OpenONI ${SOURCES})

# Add include directories specifically for the target
target_include_directories(OpenONI PRIVATE ${PROJECT_SOURCE_DIR}/include)

# Find all library files in the libs directory and link them
file(GLOB LIBS "${PROJECT_SOURCE_DIR}/libs/*.a" "${PROJECT_SOURCE_DIR}/libs/*.so")
target_link_libraries(OpenONI PRIVATE ${LIBS})
