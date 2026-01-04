#include <stdio.h>

void insertionSort(float *arr, int n) {
    float temp;
    for (int i = 1; i < n; ++i) {
        for (int j = i - 1; j >= 0; j--) {
            if (*(arr + i) < *(arr + j)) {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

void selectionSort(float *arr, int n) {
    float temp;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (*(arr + i) > *(arr + j) ) {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}