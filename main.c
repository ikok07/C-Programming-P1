//
// Created by Kaloyan Petkov on 26.06.24.
//

#include <stdio.h>

int recursion(int num, int digit) {
    int totalAppearancesSoFar;
    if (num < 10) return num != digit;
    totalAppearancesSoFar = recursion(num / 10, digit);

    if (totalAppearancesSoFar == 1) {
        if (num % 10 == digit) return 0;
        return 1;
    } else {
        if (num % 10 == digit) return 1;
        return 0;
    }
}

int main() {
    int result = recursion(124, 2);
    printf("Result: %d\n", result);
}