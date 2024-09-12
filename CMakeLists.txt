
cmake_minimum_required(VERSION 3.10)
project(crow) # Project name

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the subdirectory (this will look for a CMakeLists.txt in src/somedir/)
# add utils library
add_subdirectory(src/utils)

# add other libraries
add_subdirectory(src/leetcode)

# Add the main executable
add_executable(crow src/main.cpp)

# Link the somedir library to the executable
# link utils library
target_link_libraries(crow PRIVATE utils)

# link other libraries
target_link_libraries(crow PRIVATE leetcode)

# Set the include directories
# target_include_directories(crow PUBLIC "${PROJECT_SOURCE_DIR}/src")
