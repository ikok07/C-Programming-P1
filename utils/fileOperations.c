//
// Created by Kaloyan Petkov on 29.06.24.
//

#include <stdio.h>
#include <string.h>

int fileOperations() {
    FILE * fp;

    fp = fopen("../file.txt", "w"); // modes: w, r, a, etc.
    if (fp == NULL) {
        printf("File not found!");
        return 0;
    }

//    char string[10];
//    char myChar1 = fgetc(fp);
//    fputc('a', stdout);
//    fprintf(fp, "%d %d", 4, 4 * 4);
//    fscanf(fp, "%d", &num);
//    fputs("asd", fp);
//    fgets(string, 10, fp);
//    printf("%s", string);
//    feof(fp);

    fclose(fp);

    return 0;
}
