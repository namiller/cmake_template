cmake_minimum_required(VERSION 2.6)
project (exec1)

SET(PROJECT_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/include")
SET(PROJECT_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")

set(SRCS
  ${PROJECT_SOURCE_DIR}/main.cpp
)

# here I include the output path so that the code has the correct import paths that a user of the 
# library would be using (assuming they have the generated include/ folder in their search path.
include_directories("${INCLUDE_OUTPUT_PATH}")

add_executable(${PROJECT_NAME} ${SRCS})
target_link_libraries(${PROJECT_NAME} sub1 sub2)
