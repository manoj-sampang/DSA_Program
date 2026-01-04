#include <stdio.h>
#include <stdlib.h>

#include "arraysortlib.h"

void input(float *arr, int n) {
    printf("=== Array Inputs ===\n");
    for (int i = 0; i < n ; ++i) {
        printf("Arr[%d] = ", i + 1);
        scanf("%f", (arr + i));
        
    }
    printf("Inputs completed\n");
}

void display(float *arr, int n) {
    printf("Displaying Array Elements\n");
    for(int i = 0; i < n; ++i) {
    printf("%.2f\t ", *(arr + i));
    }
    printf("\n");
}
int main() {
    float *a;
    int n;
    printf("=== ARRAY SORT ===\n");
    printf("Enter no. of elements inside array(Natural Numbers): ");
    scanf("%d", &n);

    a = (float *)malloc(n * sizeof(float));
    input(a, n);
    printf("==== Initial Inputs (Before Sorting) ====\n");

    display(a, n);

    selectionSort(a, n);

    printf("====Ouputs (After Sorting) ====\n");

    display(a, n);
    printf("Sorting Completed... \n");
    free(a);
    return 0;

}