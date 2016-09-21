cmake_minimum_required(VERSION 2.6)
project (sub2)

SET(PROJECT_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/include")
SET(PROJECT_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")

file(COPY "${PROJECT_INCLUDE_DIR}/" DESTINATION "${INCLUDE_OUTPUT_PATH}/${PROJECT_NAME}")

file(GLOB SRCS ${PROJECT_SOURCE_DIR}/*.cpp)

include_directories(${PROJECT_INCLUDE_DIR} ${INCLUDE_OUTPUT_PATH}) #path for dependency includes
add_library(${PROJECT_NAME} SHARED ${SRCS})
target_link_libraries(${PROJECT_NAME} sub1)
