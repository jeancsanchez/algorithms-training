//
// Created by Jean  Carlos on 17/04/20.
//

#define CATCH_CONFIG_MAIN

#include "iostream"
#include "../include/catch.hpp"

using namespace std;

void printArray(const int *array, unsigned const int size)
{
    string result = "[";
    for (int i = 0; i < size; i++) {
        result += to_string(array[i]);
        if (i < size - 1) {
            result += ",";
        }
    }
    result += "]";
    cout << result << endl;
}

// Best case O(n); Worst O(N^2)
void bubbleSort(int *array, unsigned const int size)
{
    cout << "Before" << endl;
    printArray(array, size);

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[i]) {
                int aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }

    cout << "After" << endl;
    printArray(array, size);
}

TEST_CASE("Bubble sort", "[bubbleSort]")
{
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