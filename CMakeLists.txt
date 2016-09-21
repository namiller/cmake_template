cmake_minimum_required(VERSION 2.6)
project (libeuler)

enable_testing()

# in order for sub projects to compile independantly, this will need to be set there.
set(INCLUDE_OUTPUT_PATH "${PROJECT_BINARY_DIR}/include")
set(EXECUTABLE_OUTPUT_PATH "${PROJECT_BINARY_DIR}/bin")
set(LIBRARY_OUTPUT_PATH "${PROJECT_BINARY_DIR}/lib")
set(TEST_OUTPUT_PATH "${PROJECT_BINARY_DIR}/tests")


add_subdirectory(sub1)
add_subdirectory(sub2)
add_subdirectory(exec1)
