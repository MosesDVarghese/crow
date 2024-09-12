# Collect all .cpp files in this directory
# file(GLOB SOURCES "math/*.cpp")

# add sources
set(SOURCES 
    math/p204_cntprims.cpp
    math/p412_fizzbuzz.cpp
    math/p326_pofthree.cpp
    math/p013_rmntoint.cpp
)

# Create a static library from the files in somedir
add_library(leetcode STATIC ${SOURCES})

# Optionally, set the include directories for this library
target_include_directories(leetcode PUBLIC "${CMAKE_SOURCE_DIR}/src")
