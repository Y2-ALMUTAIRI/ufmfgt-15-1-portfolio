/*
Filename: Week7Task2.c
Author: Youssef Al Mutairi
Date: 27/04/2026
*/
#include <stdio.h>
#include <time.h>

struct Date {
    int day, month, year;
};

struct Age {
    int years, months, days;
};

struct Age calculateAge(struct Date dob) {
    time_t t = time(NULL);
    struct tm *current = localtime(&t);

    struct Age age;

    age.years = (current->tm_year + 1900) - dob.year;
    age.months = (current->tm_mon + 1) - dob.month;
    age.days = current->tm_mday - dob.day;

    if (age.days < 0) {
        age.days += 30;
        age.months--;
    }

    if (age.months < 0) {
        age.months += 12;
        age.years--;
    }

    return age;
}

int main() {
    struct Date dob;
    printf("Enter DOB (dd mm yyyy): ");
    scanf("%d %d %d", &dob.day, &dob.month, &dob.year);

    struct Age age = calculateAge(dob);

    printf("Age: %d years, %d months, %d days\n", age.years, age.months, age.days);

    return 0;
}


