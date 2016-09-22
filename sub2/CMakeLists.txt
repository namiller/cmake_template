cmake_minimum_required(VERSION 2.6)
project (sub2) #TODO: change this to the subproject library name

SET(PROJECT_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/include")
SET(PROJECT_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")

SET(PROJECT_UNDER_TEST "${PROJECT_NAME}") #used by the included test to determine link deps.

file(COPY "${PROJECT_INCLUDE_DIR}/" DESTINATION "${INCLUDE_OUTPUT_PATH}/${PROJECT_NAME}")

file(GLOB SRCS ${PROJECT_SOURCE_DIR}/*.cpp)

include_directories(${PROJECT_INCLUDE_DIR} ${GENERATED_INCLUDE_PATH}) #path for dependency includes
add_library(${PROJECT_NAME} SHARED ${SRCS})
target_link_libraries(${PROJECT_NAME} sub1) #TODO: change sub1 -> whatever subproject dependency(s) this has.

add_subdirectory(test)
