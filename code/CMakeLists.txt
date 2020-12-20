cmake_minimum_required(VERSION 3.17)
project(approval_test_demo)

set(CMAKE_CXX_STANDARD 14)

set(BINARY your_code)
set(SOURCE_FILES
        your_code_goes_hear.h)
add_library(${BINARY}_lib INTERFACE)
#add_executable(${BINARY}_run ${SOURCE_FILES})