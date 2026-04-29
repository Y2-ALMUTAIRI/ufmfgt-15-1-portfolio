/* Filename: Task1.c
Description: Declares sensor variables and prints their values
Author: Youssef Al Mutairi
Date: 04/03/2026
*/

#include <stdio.h>

int main() {

    int sensor_id = 50;
    float temperature = 3.14;
    char status_code = 'B';

    printf("Sensor ID: %d\n", sensor_id);
    printf("Temperature: %.2f\n", temperature);
    printf("Status Code: %c\n", status_code);

    return 0;
}