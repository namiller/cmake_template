cmake_minimum_required(VERSION 3.1)

get_filename_component(CUR_DIR ${CMAKE_CURRENT_SOURCE_DIR} NAME)
project(${CUR_DIR}) # set project name to directory name.

set(PROJECT_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}")

set(SRCS
  ${PROJECT_SOURCE_DIR}/main.cpp
)

# here I include the output path so that the code has the correct import paths that a user of the 
# library would be using (assuming they have the generated include/ folder in their search path.
include_directories("${GENERATED_INCLUDE_PATH}")

add_executable(${PROJECT_NAME} ${SRCS})
target_link_libraries(${PROJECT_NAME} sub1 sub2) #TODO: sub1, sub2 should be exchanged for the real deps.
