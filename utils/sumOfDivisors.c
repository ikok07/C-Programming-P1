//
// Created by Kaloyan Petkov on 26.06.24.
//

long int sumOfDivisors(long int num) {
    if (num == 1) return num;
    long int sum = 1 + num;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) sum += i + num / i;
    }

    return sum;
}