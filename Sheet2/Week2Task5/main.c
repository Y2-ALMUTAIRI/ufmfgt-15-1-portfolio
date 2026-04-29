/* Filename: Task5.c
Description: Computes table of f(x) = 3sin(pi*x) + 2cos(pi*x)
Author: Youssef Al Mutairi
Date: 04/03/2026
*/

#include <stdio.h>
#include <math.h>
int main() {
    double start, interval;
    double x, fx;
    const double PI = 3.14159265;
    int i;
    printf("Enter start value: ");
    scanf("%lf", &start);
    printf("Enter interval: ");
    scanf("%lf", &interval);
    printf("\n/*************************************************/\n");
    printf("Value of x\tValue of f(x)\n");
    x = start;

    for (i = 0; i < 4; i++) {
        fx = 3 * sin(PI * x) + 2 * cos(PI * x);
        printf("%.2lf\t\t%.4lf\n", x, fx);
        x = x + interval;
    }
    printf("/*************************************************/\n");
    return 0;
}

