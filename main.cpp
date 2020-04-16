#define CATCH_CONFIG_MAIN

#include <iostream>
#include "include/catch.hpp"

int findCheaper(const int array[], int size) {
    return -1;
}

TEST_CASE("Find cheaper price", "[findCheaper]") {
    int prices[8] = {10, 40, 480, 20, 100, -1, 1, 4};
    REQUIRE(findCheaper(prices, 8) == -1);
}