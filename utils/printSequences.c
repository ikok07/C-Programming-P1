//
// Created by Kaloyan Petkov on 28.06.24.
//

//
// Created by Kaloyan Petkov on 26.06.24.
//


#include <stdbool.h>
#include <stdio.h>

int printOneToN(int n) {
    if (n == 0) return 0;
    printOneToN(n - 1);
    printf("%d ", n);
}

int printNToOne(int n, bool excludeOne) {
    if (n == 0 || (excludeOne && n < 2)) return 0;
    printf("%d ", n);
    printNToOne(n - 1, excludeOne);
}


int printSequences() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printNToOne(n, true);
    printOneToN(n);
}

