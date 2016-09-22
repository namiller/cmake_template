cmake_minimum_required(VERSION 2.6)
project (demo_root) # this project name can be changed but it shouldn't really change much.

enable_testing()

# the following variables can be changed to effect the location of the build products.
set(INCLUDE_OUTPUT_PATH "${PROJECT_BINARY_DIR}/include")
set(EXECUTABLE_OUTPUT_PATH "${PROJECT_BINARY_DIR}/bin")
set(LIBRARY_OUTPUT_PATH "${PROJECT_BINARY_DIR}/lib")
set(TEST_OUTPUT_PATH "${PROJECT_BINARY_DIR}/tests")

#must be set elsewhere for subprojects to compile independantly 
set(GENERATED_INCLUDE_PATH "${INCLUDE_OUTPUT_PATH}")

#TODO: change the following lines to add the correct submodule directories
add_subdirectory(sub1)  # this (sub1) must match the name of the directory (not necisarilly the name of the project)
add_subdirectory(sub2)  # ditto
add_subdirectory(exec1) # ditto
add_subdirectory(test)  # ditto
