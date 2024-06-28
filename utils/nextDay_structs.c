//
// Created by Kaloyan Petkov on 28.06.24.
//

#include <stdio.h>
#include <stdbool.h>

typedef struct date {
    int day;
    int month;
    int year;
} Date;

void printNextDate(Date dt) {
    bool yearIsLeap;

    if (dt.year % 4 == 0) {
        if (dt.year % 100 == 0) {
            if (dt.year % 400 == 0) yearIsLeap = true;
            else yearIsLeap = false;
        } else {
            yearIsLeap = true;
        }
    } else {
        yearIsLeap = false;
    }

    int daysInMonth;

    if (yearIsLeap && dt.month == 2) daysInMonth = 29;
    else if (!yearIsLeap && dt.month == 2) daysInMonth = 28;
    else if (dt.month < 8) {
        if (dt.month % 2 == 0) daysInMonth = 30;
        else daysInMonth = 31;
    } else {
        if (dt.month % 2 == 0) daysInMonth = 31;
        else daysInMonth = 30;
    }

    int nextDay = ++dt.day;
    int nextMonth = dt.month;
    int nextYear = dt.year;

    if (nextDay > daysInMonth) {
        nextDay = 1;
        if (++dt.month > 12) {
            nextMonth = 1;
            nextYear++;
        } else {
            nextMonth++;
        }
    }

    printf("%02d.%02d.%02d", nextDay, nextMonth, nextYear);
}