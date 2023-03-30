cmake_minimum_required(VERSION 3.10)

project(MyMath VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the include directory to the search path
include_directories(include)

# Add the mymath library
add_library(mymath src/mymath.cpp)

# Add the main executable
add_executable(myapp src/main.cpp)

# Link the mymath library to the main executable
target_link_libraries(myapp mymath)

# Add the test executable
add_executable(test_mymath test/test_mymath.cpp)

# Link the mymath library to the test executable
target_link_libraries(test_mymath mymath)



