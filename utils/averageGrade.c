#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int averageGrade(void) {

    double sum = 0;
    int count = 0;
    double currGrade = 0;

    while (currGrade >= 0) {
        printf("Student grade to add: ");
        scanf("%lf", &currGrade);
        if (currGrade >= 0) {
            sum += currGrade;
            count++;
        }
    }

    if (count == 0) {
        printf("There aren't any notes to be calculated!");
        return 0;
    }

    printf("Average: %0.2lf", sum / count);

    return 0;
}
