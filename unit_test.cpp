/*
    Unit test source, run "make test" to build
    Using "Catch" unit testing framework -- https://github.com/catchorg/Catch2
*/

#define CATCH_CONFIG_MAIN
#include <catch/catch.hpp>
#include "buzz.hpp"


TEST_CASE("fizzbuzz function testing", "[fizzbuzz]")
{
    std::vector<std::string> test_v1, test_v2, ans_v1, ans_v2;

    SECTION("Little numbers")
    {
        test_v1 = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};
        ans_v1  = {"1", "2", "fizz", "4", "buzz", "fizz", "7", "8", "fizz", "buzz"};

        test_v2 = {"-100", "-270", "-1437", "-3345"};
        ans_v2  = {"buzz", "fizzbuzz", "fizz", "fizzbuzz"};

        REQUIRE(fizzbuzz(test_v1) == ans_v1);
        REQUIRE(fizzbuzz(test_v2) == ans_v2);
    }

    SECTION("Big numbers")
    {
        test_v1 = {"12463152346", "1000000005", "-1421123132", "9090000005"};
        ans_v1  = {"12463152346", "fizzbuzz", "-1421123132", "buzz"};

        REQUIRE(fizzbuzz(test_v1) == ans_v1);
    }

    SECTION("Huge numbers")
    {
        test_v1 = {"1000000000000000005000000000000000005000000000000000000200000000000000000000005445000",
                   "-250000000000000000000000000000001000000000000000001000000000000000000000000000000003",
                   "100000000000000000000000000000100000000000000000000000001000000000000000000000001" };
        ans_v1  = {"buzz", "fizz", 
                    "100000000000000000000000000000100000000000000000000000001000000000000000000000001"};

        REQUIRE(fizzbuzz(test_v1) == ans_v1);
    }

    SECTION("OMFG numbers")
    {
        test_v1 = {"-25200000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000", 
                   "500000000000000000050000000000000000000050000000000000000000000000100000000000000100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"};
        ans_v1  = {"fizzbuzz", "buzz"};

        REQUIRE(fizzbuzz(test_v1) == ans_v1);
    }

    SECTION("Characters (must be interpreted as ASCII codes)")
    {
        test_v1 = {"a", "b", "c", "abc"};
        ans_v1  = {"a", "b", "fizz", "fizz"};

        REQUIRE(fizzbuzz(test_v1) == ans_v1);
    }
}