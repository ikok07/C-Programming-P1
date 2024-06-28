//
// Created by Kaloyan Petkov on 27.06.24.
//

#include <stdio.h>
#include <stdlib.h>

#define SIZE 8
#define POSITIONS 2

int rotateArrayRight() {

    int arr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        printf("Number to add: ");
        scanf("%d", &arr[i]);
    }

    int tempsFirstDigits[SIZE - POSITIONS];
    int tempsLastDigits[POSITIONS];

    for (int i = 0; i < SIZE; i++) {
        if (i < SIZE - POSITIONS) {
            tempsFirstDigits[i] = arr[i];
        } else {
            tempsLastDigits[abs(SIZE - POSITIONS - i)] = arr[i];
        }
    }

    for (int i = 0; i < SIZE; i++) {
        if (i < POSITIONS) arr[i] = tempsLastDigits[i];
        else arr[i] = tempsFirstDigits[i - POSITIONS];
    }

    return 0;
}
