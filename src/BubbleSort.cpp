//
// Created by Jean  Carlos on 17/04/20.
//
#include "iostream"

using namespace std;

void printArray(const int *array, unsigned const int size) {
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
void bubbleSort(int *array, unsigned const int size) {
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