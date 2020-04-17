//
// Created by Jean  Carlos on 17/04/20.
//

#define CATCH_CONFIG_MAIN

#include <iostream>
#include "../include/catch.hpp"

using namespace std;

int findCheaper(const int *array, unsigned const int size) {
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
    const int size = 8;
    int prices[size] = {10, 40, 480, 20, 100, -1, 1, 4};
    REQUIRE(findCheaper(prices, size) == -1);
}

