//
// Created by Kaloyan Petkov on 26.06.24.
//

#include <stdio.h>

char toLower(char letter) {
    if (letter < 'A' || letter > 'Z') {
        printf("Letter must be uppercase in order to make it lowercase!\n");
        return '_';
    }

    char lowercase = letter + 32;
    return lowercase;
}

char toUpper(char letter) {
    if (letter < 'a' || letter > 'z') {
        printf("Letter must be lowercase in order to make it uppercase!\n");
        return '_';
    }

    char uppercase = letter - 32;
    return uppercase;
}
