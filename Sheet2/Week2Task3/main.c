/* Filename: Task3.c
Description: Converts miles per hour to kilometres per hour
Author: Youssef Al Mutairi
Date: 04/03/2026
*/

#include <stdio.h>

int main() {

    double mph;
    double kmh;
    const double CONVERSION = 1.60934;
    printf("Enter speed in miles per hour: ");
    scanf("%lf", &mph);
    if (mph < 0) {
        printf("Invalid input. Speed cannot be negative.\n");
    }
    else {
        kmh = mph * CONVERSION;
        printf("Speed in kilometres per hour: %.2lf\n", kmh);
    }
    return 0;
}

