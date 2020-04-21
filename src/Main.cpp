#define CATCH_CONFIG_MAIN

#include "../include/catch.hpp"
#include "../include/TestsCases.h"

TEST_CASE("Linear search", "[findCheaper]")
{
    const int size = 8;
    int prices[size] = {10, 480, 40, 20, 100, 1, 4, -1};
    REQUIRE(findCheaper(prices, size) == -1);
}

TEST_CASE("Bubble sort", "[bubbleSort]")
{
    const int size = 8;
    int array[size] = {10, 480, 40, 20, 100, 1, 4, -1};
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

TEST_CASE("Insertion sort", "[insertionSort]")
{
    const int size = 8;
    int array[size] = {10, 480, 40, 20, 100, 1, 4, -1};
    insertionSort(array, size);

    REQUIRE(array[0] == -1);
    REQUIRE(array[1] == 1);
    REQUIRE(array[2] == 4);
    REQUIRE(array[3] == 10);
    REQUIRE(array[4] == 20);
    REQUIRE(array[5] == 40);
    REQUIRE(array[6] == 100);
    REQUIRE(array[7] == 480);
}

TEST_CASE("Selection sort", "[insertionSort]")
{
    const int size = 8;
    int array[size] = {10, 480, 40, 20, 100, 1, 4, -1};
    selectionSort(array, size);

    REQUIRE(array[0] == -1);
    REQUIRE(array[1] == 1);
    REQUIRE(array[2] == 4);
    REQUIRE(array[3] == 10);
    REQUIRE(array[4] == 20);
    REQUIRE(array[5] == 40);
    REQUIRE(array[6] == 100);
    REQUIRE(array[7] == 480);
}