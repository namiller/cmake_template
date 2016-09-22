cmake_minimum_required(VERSION 2.6)
project (sub1) #TODO: change this to the desired library name

SET(PROJECT_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/include")
SET(PROJECT_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")

SET(PROJECT_UNDER_TEST "${PROJECT_NAME}") #used by the included test to determine link deps.

# This copies the include/ header files into a folder with the project name under the output include path
file(COPY "${PROJECT_INCLUDE_DIR}/" DESTINATION "${INCLUDE_OUTPUT_PATH}/${PROJECT_NAME}")

# automatically depends on all cpp files in source directory
file(GLOB SRCS ${PROJECT_SOURCE_DIR}/*.cpp)

#TODO: if you prefer manually including the source files you can use the following template (rather than the above glob)
#set(SRCS
#  ${PROJECT_SOURCE_DIR}/first.cpp
#)

include_directories(${PROJECT_INCLUDE_DIR})
add_library(${PROJECT_NAME} SHARED ${SRCS})

add_subdirectory(test)
