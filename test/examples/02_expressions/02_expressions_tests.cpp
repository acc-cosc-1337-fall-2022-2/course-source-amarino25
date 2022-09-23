#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "expressions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test operator precedence 1")
{
	REQUIRE(operator_precedence_1(12,6,3)==14);
}
TEST_CASE("Test operator precedence 2")
{
	REQUIRE(operator_precedence_1(12,6,3)==14);
}