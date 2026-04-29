/*
Filename: Week1Task4.c
Author: Youssef Al Mutairi
Date:03/03/2026
Description: Program that converts speed from m/s to mph
*/

#include <stdio.h>

int main() {

    float speed_ms;
    float speed_mph;
    const double conversion_factor = 2.23694;

    printf("Enter speed in meters per second: ");
    scanf("%f", &speed_ms);

    if (speed_ms<0) {
        printf("Invalid input. Speed cannot be negative. \n");
    }
    else {
        speed_mph = speed_ms * conversion_factor;
        printf("Speed in miles per hour: %.2f\n", speed_mph);
    }
    return 0;
}