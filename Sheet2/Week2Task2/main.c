/*
Filename: Week2Task2.c
Author: Youssef Al Mutairi
Date: 04/03/2026
Description: Reverses a two-digit integer
*/
#include <stdio.h>
int main() {

    int number;
    int first_digit;
    int second_digit;
    int reversed;

    printf("+++++++++++++++++\n");
    printf("Please enter number: ");
    scanf("%d", &number);

    first_digit = number / 10;
    second_digit = number % 10;

    reversed = (second_digit * 10) + first_digit;

    printf("Number reversed is: %d\n", reversed);
    printf("*******************\n");
    return 0;
}