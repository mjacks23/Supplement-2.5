#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions.h"

TEST_CASE("floatToBytes works correctly") {
    float testValue = 12.34f;
    auto bytes = floatToBytes(testValue);
    REQUIRE(bytes.size() == 4);
}
