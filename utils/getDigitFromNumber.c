//
// Created by Kaloyan Petkov on 26.06.24.
//

int getDigits(int number) {
    int maxDigit = 0;

    while (number) {
        int digit = number % 10;
        if (maxDigit < digit ) {
            maxDigit = digit;
        }
        number /= 10;
    }

    return maxDigit;
}
