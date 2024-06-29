//
// Created by Kaloyan Petkov on 29.06.24.
//

#include <stdio.h>

int swap(int *num1p, int num2, int *num2p) {
    *num2p = *num1p;
    return num2;
}

int swapWithoutThirdVar() {

    int a = 1;
    int b = 2;
    a = swap(&a, b, &b);

    printf("%d %d", a, b);

    return 0;
}
