//
// Created by Kaloyan Petkov on 28.06.24.
//

#include <stdbool.h>
#include <stdio.h>

int evaluate(int num) {
    static bool firstIteration = true;
    int currNum = num;
    int lastDigit = num < 10 ? num : num % 10;
    int numberLength = 1;
    while (currNum > 10) {
        numberLength++;
        currNum /= 10;
    }
    int position = numberLength - 1;
    bool evenPosition = position % 2 == 0;
    bool evenDigit = lastDigit % 2 == 0;
    bool condition = (evenPosition && evenDigit) || (!evenPosition && !evenDigit);

    printf("Position: %d: %d\n", position, lastDigit);

    if (firstIteration) {
        firstIteration = false;
        int conditionSum = condition + evaluate(num / 10);
        return conditionSum == numberLength;
    }

    if (num < 10) {
        firstIteration = true;
        return condition == numberLength;
    }
    return condition + evaluate(num / 10);
}
