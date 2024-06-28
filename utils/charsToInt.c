//
// Created by Kaloyan Petkov on 26.06.24.
//

#include <stdio.h>
#include <stdbool.h>

bool isDigit(char character) {
    if (character < '1' || character > '9') return false;
    return true;
}

int charsToInteger(char c1, char c2, char c3) {
    int hundreds, tens, units;
    int finalResult;

    if (!isDigit(c1) || !isDigit(c2) || !isDigit(c3)) {
        printf("\nCharacter must be a digit!");
        return 1;
    }

    hundreds = c1 - '0';
    tens = c2 - '0';
    units = c3 - '0';

    return hundreds * 100 + tens * 10 + units;
}