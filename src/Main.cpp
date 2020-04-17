#define CATCH_CONFIG_MAIN

#include "../include/catch.hpp"
#include "../include/TestsCases.h"

TEST_CASE("Linear search", "[findCheaper]") {
    const int size = 8;
    int prices[size] = {10, 40, 480, 20, 100, -1, 1, 4};
    REQUIRE(findCheaper(prices, size) == -1);
}

TEST_CASE("Bubble sort", "[bubbleSort]") {
    const int size = 8;
    int array[size] = {10, 40, 480, 20, 100, -1, 1, 4};
    bubbleSort(array, size);

    REQUIRE(array[0] == -1);
    REQUIRE(array[1] == 1);
    REQUIRE(array[2] == 4);
    REQUIRE(array[3] == 10);
    REQUIRE(array[4] == 20);
    REQUIRE(array[5] == 40);
    REQUIRE(array[6] == 100);
    REQUIRE(array[7] == 480);
}