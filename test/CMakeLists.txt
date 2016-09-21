cmake_minimum_required(VERSION 2.6)
project(integration_test)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS} ${INCLUDE_OUTPUT_PATH})

set(EXECUTABLE_OUTPUT_PATH "${TEST_OUTPUT_PATH}")

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} ${GTEST_LIBRARIES} pthread sub1 sub2)
add_test(NAME Integration COMMAND ${PROJECT_NAME})
