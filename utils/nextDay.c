//
// Created by Kaloyan Petkov on 24.06.24.
//

#include <stdio.h>
#include <stdbool.h>

int nextDay(void) {

    int day, month, year;

    printf("Day: ");
    scanf("%d", &day);

    printf("Month: ");
    scanf("%d", &month);

    printf("Year: ");
    scanf("%d", &year);

    bool yearIsLeap;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) yearIsLeap = true;
            else yearIsLeap = false;
        } else {
            yearIsLeap = true;
        }
    } else {
        yearIsLeap = false;
    }

    int daysInMonth;

    if (yearIsLeap && month == 2) daysInMonth = 29;
    else if (!yearIsLeap && month == 2) daysInMonth = 28;
    else if (month < 8) {
        if (month % 2 == 0) daysInMonth = 30;
        else daysInMonth = 31;
    } else {
        if (month % 2 == 0) daysInMonth = 31;
        else daysInMonth = 30;
    }

    int nextDay = ++day;
    int nextMonth = month;
    int nextYear = year;

    if (nextDay > daysInMonth) {
        nextDay = 1;
        if (++month > 12) {
            nextMonth = 1;
            nextYear++;
        } else {
            nextMonth++;
        }
    }

    printf("%02d.%02d.%d", nextDay, nextMonth, nextYear);

    return 0;
}

