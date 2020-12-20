cmake_minimum_required(VERSION 3.17)
project(approval_test_demo)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_VERBOSE_MAKEFILE off)

enable_testing()
add_subdirectory(code)
add_subdirectory(approvalTest_with_gtest_lib)
add_subdirectory(tests)