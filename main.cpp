#define CATCH_CONFIG_MAIN

#include <iostream>
#include "include/catch.hpp"

int findCheaper(const int array[]) {
    int size = sizeof(array);
    int cheaper = array[0];

    for (int i = 0; i < size; i++) {
        int price = array[i];

        if (price < cheaper) {
            cheaper = price;
        }
    }

    return cheaper;
}

TEST_CASE("Linear search", "[findCheaper]") {
    int prices[8] = {10, 40, 480, 20, 100, -1, 1, 4};
    REQUIRE(findCheaper(prices) == -1);
}


int* bubbleSort(const int array[]) {
    int newArray[1] = {1};
    return newArray;
}

// Best case O(n); Worst O(N^2)
TEST_CASE("Bubble sort", "[bubbleSort]") {
    int array[8] = {10, 40, 480, 20, 100, -1, 1, 4};
    int result = bubbleSort(array);

    REQUIRE(result[0] == -1);
    REQUIRE(result[1] == -1);
    REQUIRE(result[2] == 4);
    REQUIRE(result[3] == 10);
    REQUIRE(result[4] == 20);
    REQUIRE(result[5] == 40);
    REQUIRE(result[6] == 100);
    REQUIRE(result[6] == 480);
}