/*
* Filename: Week4Task1c
 * Author: Youssef Al Mutairi
 * Date: 06/03/2026
 * Description: Program that initializes an array of 10 doubles to -1.0 and prints the values.
 */
#include <stdio.h>

int main() {

    double sensors[10];
    int i;

    for(i = 0; i < 10; i++) {
        sensors[i] = -1.0;
    }

    printf("Sensor values:\n");

    for(i = 0; i < 10; i++) {
        printf("Sensor %d: %.1f\n", i, sensors[i]);
    }

    return 0;
}
