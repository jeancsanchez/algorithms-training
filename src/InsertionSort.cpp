//
// Created by Jean  Carlos on 17/04/20.
//
#include "iostream"

using namespace std;

void print(const int *array, unsigned const int size)
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

void insertionSort(int *array, unsigned const int size)
{
    cout << "Before" << endl;
    print(array, size);

    int i, j, current;
    for (int i = 1; i < size; i++) {
        current = array[i];

        for (j = i; (j > 0) && (current < array[j - 1]); j--) {
            array[j] = array[j - 1];
        }

        array[j] = current;
    }

    cout << "After" << endl;
    print(array, size);
}