cmake_minimum_required(VERSION 3.28)
project(helloWorld C)

set(CMAKE_C_STANDARD 11)

add_executable(helloWorld utils/averageGrade.c
        utils/nextDay.c
        main.c
        utils/getDigitFromNumber.c
        utils/toLowerAndUpper.c
        utils/charsToInt.c
        utils/sumOfDivisors.c
        utils/rotateArrayLeft.c
        utils/rotateArrayRight.c
        utils/strtrim.c
        utils/printSequences.c
        utils/checkForEvenDigits.c
        utils/evaluateDigits.c
        utils/nextDay_structs.c
        utils/rationalNumbers.c)
