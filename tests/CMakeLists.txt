cmake_minimum_required(VERSION 3.17)
project(approval_test_demo)

set(CMAKE_CXX_STANDARD 14)

set(BINARY approvalTest_demo_run)
set(SOURCE_FILES
        main.cpp)
add_executable(${BINARY} ${SOURCE_FILES})
target_link_libraries(${BINARY}  ApprovalTests::ApprovalTests gtest)