//
// Created by Kaloyan Petkov on 29.06.24.
//

#include <stdio.h>
#include <string.h>

int fileTest() {

    char *filename = "../file.txt";
//    printf("Enter filename: ");
//    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("File not found!");
        return 0;
    }

    int freqAppearancesArr[26] = {0};
    char currChar;
    while ((currChar = fgetc(fp)) != EOF) {
        freqAppearancesArr[currChar - 97]++;
    }

    int mostOccurrences;
    int mostOcurrIndex;
    for (int i = 0; i < 26; i++) {
        if (mostOccurrences < freqAppearancesArr[i]) {
            mostOcurrIndex = i;
            mostOccurrences = freqAppearancesArr[i];
        }
    }

    printf("Most occurred character: %c, %d times", mostOcurrIndex + 97, mostOccurrences);

    fclose(fp);
    return 0;
}
