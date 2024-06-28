//
// Created by Kaloyan Petkov on 26.06.24.
//

#include <stdio.h>
#include <string.h>

typedef struct info {
    char firstName[20];
    int age;
} Info;

int main() {
    Info test = {"asd", 2};
    Info *ptrTest = &test;
    printf("%d", test.age);

    ptrTest->age = 3;

}