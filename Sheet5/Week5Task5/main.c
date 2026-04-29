/*
* Filename: Week5Task5.c
* Author: Youssef Al Mutairi
* Date: 06/03/2026
* Description: Program that calculates base raised to an exponent using a loop.
*/
#include <stdio.h>
// Function prototype: calculates base^exponent without using math.h
int power(int base, int exponent);
int main()
{
    int base, exponent;  // Variables to store user input
    // Prompt user to enter the base
    printf("Enter base: ");
    scanf("%d", &base);
    // Prompt user to enter the exponent
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    printf("Result = %d\n", power(base, exponent)); // Call the power function and print the result
    return 0;  // End of program
}
int power(int base, int exponent) // Function to calculate base^exponent
{
    int result = 1;  // Initialize result to 1
    // Multiply base repeatedly exponent times
    for(int i = 1; i <= exponent; i++)
    {
        result = result * base;
    }
    return result;  // Return the calculated power
}
