#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test that factorial function return correct values")
{
	REQUIRE(num(3) == 6);
	REQUIRE(num(4) == 24);
	REQUIRE(num(5) == 120);
}
