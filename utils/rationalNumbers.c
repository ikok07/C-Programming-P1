//
// Created by Kaloyan Petkov on 28.06.24.
//

#include <stdio.h>

typedef struct rational {
    int numerator;
    int denominator;
} Rational;

int findLeastTotalMultiple(int d1, int d2) {
    int leastTotalMultiple = 1;
    while (d1 > 1 || d2 > 1) {
        int multiplier = 0;
        if (d1 % 2 == 0 && d1 > 1) {
            d1 /= 2;
            multiplier = 2;
        } else if (d1 % 5 == 0 && d1 > 1) {
            d1 /= 5;
            multiplier = 5;
        } else if (d1 > 1) {
            multiplier = d1;
            d1 /= d1;
        }

        if (d2 % 2 == 0 && (multiplier == 2 || multiplier == 0) && d2 > 1) {
            d2 /= 2;
            multiplier = 2;
        } else if (d2 % 5 == 0 && (multiplier == 5 || multiplier == 0) && d2 > 1) {
            d2 /= 5;
            multiplier = 5;
        } else if (multiplier == 0 && d2 > 1) {
            multiplier = d2;
            d2 /= d2;
        }
        leastTotalMultiple *= multiplier;
    }
    return leastTotalMultiple;
}

Rational addition(Rational num1, Rational num2) {
    Rational finalNum;
    if (num1.denominator == num2.denominator) {
        finalNum.numerator = num1.numerator + num2.numerator;
        finalNum.denominator = num1.denominator;
        return finalNum;
    }

    int d1 = num1.denominator, d2 = num2.denominator;
    int leastTotalMultiple = findLeastTotalMultiple(d1, d2);

    num1.numerator *= (leastTotalMultiple / num1.denominator);
    num2.numerator *= (leastTotalMultiple / num2.denominator);
    finalNum.numerator = num1.numerator + num2.numerator;
    finalNum.denominator = leastTotalMultiple;
    return finalNum;
}

Rational subtraction(Rational num1, Rational num2) {
    Rational finalNum;
    if (num1.denominator == num2.denominator) {
        finalNum.numerator = num1.numerator - num2.numerator;
        finalNum.denominator = num1.denominator;
        return finalNum;
    }

    int d1 = num1.denominator, d2 = num2.denominator;
    int leastTotalMultiple = findLeastTotalMultiple(d1, d2);

    num1.numerator *= (leastTotalMultiple / num1.denominator);
    num2.numerator *= (leastTotalMultiple / num2.denominator);
    finalNum.numerator = num1.numerator - num2.numerator;
    finalNum.denominator = leastTotalMultiple;
    return finalNum;
}

Rational increment(Rational num1, int i) {
    Rational incrementedRational = {i * num1.denominator, i* num1.denominator};
    return addition(num1, incrementedRational);
}

Rational decrement(Rational num1, int i) {
    Rational incrementedRational = {i * num1.denominator, i* num1.denominator};
    return subtraction(num1, incrementedRational);
}

Rational multiplication(Rational num1, Rational num2) {
    Rational finalNum = {
            .numerator = num1.numerator * num2.numerator,
            .denominator = num1.denominator * num2.denominator
    };
    return finalNum;
}

Rational devision(Rational num1, Rational num2) {
    Rational finalNum = {
            .numerator = num1.numerator * num2.denominator,
            .denominator = num1.denominator * num2.numerator
    };
    return finalNum;
}

int compare(Rational num1, Rational num2) {
    Rational currNum1 = num1;
    Rational currNum2 = num2;
    if (currNum1.denominator == currNum2.denominator) {
        if (currNum1.numerator > currNum2.numerator) return 1;
        else if (currNum1.numerator < currNum2.numerator) return -1;
        else return 0;
    }

    int d1 = currNum1.denominator, d2 = currNum2.denominator;
    int leastTotalMultiple = findLeastTotalMultiple(d1, d2);

    currNum1.numerator *= (leastTotalMultiple / currNum1.denominator);
    currNum2.numerator *= (leastTotalMultiple / currNum2.denominator);

    if (currNum1.numerator > currNum2.numerator) return 1;
    else if (currNum1.numerator < currNum2.numerator) return -1;
    else return 0;
}

void rationalNumbers() {
    Rational num1 = {5, 25};
    Rational num2 = {3, 30};

    int value = compare(num1, num2);

    printf("%d", value);
}