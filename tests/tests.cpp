#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions.h"

TEST_CASE("floatToBytes works correctly") {
    float testValue = 12.34f;
    auto bytes = floatToBytes(testValue);
    REQUIRE(bytes.size() == 4);
}

TEST_CASE("Function pointer calls correctly") {
    bool wasCalled = false;
    auto testFunction = [&](int) { wasCalled = true; };
    callFunctionPointer(testFunction, 5);
    REQUIRE(wasCalled);
}

TEST_CASE("extractBytes extracts correct bytes") {
    double testValue = 123.456;
    auto extracted = extractBytes(testValue);
    REQUIRE(extracted.size() == 4);
}