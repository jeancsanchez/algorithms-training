//
// Created by Jean  Carlos on 17/04/20.
//
#include "iostream"

using namespace std;


void p(const int *array, unsigned const int size)
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

void selectionSort(int *array, unsigned const int size)
{

    cout << "Before" << endl;
    p(array, size);

    int i, j, lowerIndex;
    for (i = 0; i < size; i++) {
        lowerIndex = i;

        for (j = i + 1; j < size; j++) {
            if (array[j] < array[lowerIndex]) {
                lowerIndex = j;
            }
        }

        int aux = array[i];
        array[i] = array[lowerIndex];
        array[lowerIndex] = aux;
    }

    cout << "After" << endl;
    p(array, size);
}