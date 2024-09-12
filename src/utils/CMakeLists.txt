# Collect all .cpp files in this directory
file(GLOB SOURCES "vectors/*.cpp")

# Create a static library from the files in somedir
add_library(utils STATIC ${SOURCES})

# Optionally, set the include directories for this library
target_include_directories(utils PUBLIC "${CMAKE_SOURCE_DIR}/src")
