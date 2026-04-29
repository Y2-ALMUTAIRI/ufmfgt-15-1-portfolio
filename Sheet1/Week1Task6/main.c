/*
 * Filename: Week1Task6.c
 * Author: Youssef Al Mutairi
 * Date: 03/03/2026
 * Description: Program that calculates the sum of two numbers and shows if it's positive, negative or zero
 * */
#include<stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("The sum is: %d\n", sum);

    if (sum > 0) {
        printf("The sum is positive.\n");
    } else if (sum ==0) {
        printf("The sum is zero.\n");
    }else {
        printf("The sum is negative.\n");
    }
    return 0;
}