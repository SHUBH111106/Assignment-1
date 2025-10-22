#include <stdio.h>
#include "arraylib.h"

int main() {
    int a[] = {3, 1, 4, 1, 5};
    int n = 5;

    printf("Original ");
    displayArray(a, n);

    printf("Max at index %d\n", findMaxIndex(a, n));
    printf("Min at index %d\n", findMinIndex(a, n));
    printf("Average = %.2f\n", findAverage(a, n));

    reverseArray(a, n);
    printf("After Reversing ");
    displayArray(a, n);

    sortArray(a, n);
    printf("After Sorting ");
    displayArray(a, n);

    int val = 4;
    int index = linearSearch(a, n, val);
    if (index != -1)
        printf("Value %d found at index %d\n", val, index);
    else
        printf("Value %d not found in array\n", val);

    return 0;
}
