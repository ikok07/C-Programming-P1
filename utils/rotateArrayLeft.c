//
// Created by Kaloyan Petkov on 27.06.24.
//
#include <stdio.h>

#define SIZE 8
#define POSITIONS 3

int rotateLeft() {

    int arr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        printf("Number to add: ");
        scanf("%d", &arr[i]);
    }

    int temps[POSITIONS];
    for (int i = 0; i < SIZE - POSITIONS; i++) {
        if (i < POSITIONS) temps[i] = arr[i];
        arr[i] = arr[i + POSITIONS];
    }

    for (int i = 0; i < POSITIONS; i++) {
        arr[SIZE - POSITIONS + i] = temps[i];
    }

    return 0;
}