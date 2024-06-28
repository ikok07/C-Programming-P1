//
// Created by Kaloyan Petkov on 28.06.24.
//

int checkForEvenDigits(int num) {
    if (num < 10) return num % 2 == 0;
    int sum = num % 10 + checkForEvenDigits(num / 10);
    return sum % 2 == 0;
}
