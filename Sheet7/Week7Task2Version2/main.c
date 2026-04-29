#include <stdio.h>
#include <time.h>

struct Date {
    int day;
    int month;
    int year;
};
struct Age {
    int years;
    int months;
    int days;
};
int isValidDate(int d, int m, int y) {
    if (y < 0 || y > 2026)
        return 0;
    if (m < 1 || m > 12)
        return 0;
    if (d < 1 || d > 31)
        return 0;
    if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30)
        return 0;
    if (m == 2 && d > 29)
        return 0;
    return 1;
}
struct Age calculateAge(struct Date d) {
    struct Age a;
    time_t t = time(NULL);
    struct tm *current = localtime(&t);
    int day = current->tm_mday;
    int month = current->tm_mon + 1;
    int year = current->tm_year + 1900;
    a.years = year - d.year;
    a.months = month - d.month;
    a.days = day - d.day;
    if (a.days < 0) {
        a.days += 30;
        a.months--;
    }
    if (a.months < 0) {
        a.months += 12;
        a.years--;
    }
    return a;
}

int main() {
    struct Date birth;
    struct Age result;
    // Input
    printf("Enter your date of birth (DD MM YYYY): ");
    scanf("%d %d %d", &birth.day, &birth.month, &birth.year);
    // Validation
    if (!isValidDate(birth.day, birth.month, birth.year)) {
        printf("Invalid date entered!\n");
        return 1;
    }
    // Calculation
    result = calculateAge(birth);
    // Output
    printf("Age: %d years, %d months, %d days\n",
           result.years, result.months, result.days);
    return 0;
}

