//
// Created by Kaloyan Petkov on 29.06.24.
//

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void swapArrays(int **arr1p, int **arr2p) {
    int *temp;
    temp = *arr1p;
    *arr1p = *arr2p;
    *arr2p = temp;
}

void printArr(int *arr, int size, int arrIndex) {
    for (int i = 0; i < size; i++) {
        printf("arr%d[%d]: %d\n", arrIndex, i, arr[i]);
    }
    printf("\n");
}

int *generateArray(int size) {
    int *arr;
    arr = (int*)malloc(size*sizeof(int));
    for (int i = 0; i < size; i++) {
        printf("Enter value: ");
        scanf("%d", &arr[i]);
    }
    return arr;
}

int swapTwoArrays() {

    int arr1Size, arr2Size;
    int *arr1, *arr2;

    printf("Array1 size: ");
    scanf("%d", &arr1Size);
    printf("Array2 size: ");
    scanf("%d", &arr2Size);

    arr1 = generateArray(arr1Size);
    arr2 = generateArray(arr2Size);

    swapArrays(&arr1, &arr2);

    printArr(arr1, arr1Size, 1);
    printArr(arr2, arr2Size, 2);

    free(arr1);
    free(arr2);

    return 0;
}
