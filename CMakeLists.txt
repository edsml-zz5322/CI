cmake_minimum_required(VERSION 3.10)

project(MyMath VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
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

# Find Doxygen
find_package(Doxygen)

# Add a custom target to generate Doxygen documentation
if(DOXYGEN_FOUND)
    configure_file(Doxyfile.in ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile @ONLY)
    add_custom_target(doxygen
        COMMAND ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        COMMENT "Generating API documentation with Doxygen"
        VERBATIM)
endif()

# Install the mymath library and headers
install(TARGETS mymath DESTINATION lib)
install(DIRECTORY include/ DESTINATION include)
