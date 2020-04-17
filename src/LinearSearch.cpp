//
// Created by Jean  Carlos on 17/04/20.
//

#include <iostream>

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

