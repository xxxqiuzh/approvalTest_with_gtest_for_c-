#include <iostream>
#include <string>
#include "gtest/gtest.h"
#include "ApprovalTests.hpp"

using namespace ApprovalTests;

// auto customization = GoogleConfiguration::addIgnorableTestCaseNameSuffix("IgnoreThis");

TEST(TestCaseName_IgnoreThis, TestName)
{
    testing::internal::CaptureStdout();

    // add your code
    std::cout << "case output" << std::endl;

    std::string output = testing::internal::GetCapturedStdout();
    Approvals::verify(output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    ApprovalTests::initializeApprovalTestsForGoogleTests();
    return RUN_ALL_TESTS();
}