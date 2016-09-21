cmake_minimum_required(VERSION 2.6)
project(sub1_test)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

set(EXECUTABLE_OUTPUT_PATH "${TEST_OUTPUT_PATH}")

add_executable(${PROJECT_NAME} main.cpp)

message("test for sub1: ${EXECUTABLE_OUTPUT_PATH}/${PROJECT_NAME}")

target_link_libraries(${PROJECT_NAME} ${GTEST_LIBRARIES} pthread sub1)
add_test(NAME Test1 COMMAND ${PROJECT_NAME})
