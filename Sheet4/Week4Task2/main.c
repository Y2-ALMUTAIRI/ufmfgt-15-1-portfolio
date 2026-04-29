/*
*Filename:Week4Task3.c
*Author: Youssef Al Mutairi
*Date: 06/03/2026
*Description: Displays the number of positive, negative and zero values in an array of 12 integers.
*/
#include <stdio.h>

int main() {
    float signal[8] = {88.5, 92.1, 85.0, 95.3, 89.9, 91.2, 84.8, 90.5};
    float min, max, sum = 0, average;
    int i;
    min = signal[0];
    max = signal[0];
    for(i = 0; i < 8; i++) {

        if(signal[i] < min)
            min = signal[i];

        if(signal[i] > max)
            max = signal[i];

        sum += signal[i];
    }
    average = sum / 8;
    printf("Minimum: %.2f\n", min);
    printf("Maximum: %.2f\n", max);
    printf("Average: %.2f\n", average);
    return 0;
}
