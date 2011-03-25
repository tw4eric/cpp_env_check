#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <iostream>
using namespace std;

#include "EnvCheck.hh"
using namespace CCNEnvCheck;

#define GTEST(testName) TEST(TEST_CASE,testName)

#define TEST_CASE EnvCheck

class EnvCheckerMock : public EnvChecker {
    public:
        EnvCheckerMock() {}
        MOCK_METHOD0(returnABool, bool());
};

GTEST(shouldValidateTheEnvironment)
{
    EnvCheck envObject;

    envObject.printNumbers();
}

GTEST(shouldBeAbleToDoASimpleMock) {
    EnvCheckerMock ecm;
    EXPECT_CALL(ecm, returnABool()).Times(1);
    ASSERT_EQ(false, ecm.returnABool());
}

