/*
Filename: Week5Task2.c
Author: Youssef Al Mutairi
Date: 06/03/2026
Description: Program that that adds two integers using a function and displays the result.
*/
#include <stdio.h>
// Function prototype: declares a function that takes two integers and returns their sum
int add_numbers(int a, int b);
int main()
{
    int num1, num2, result;
    // Ask the user to enter the first number
    printf("Enter first number: ");
    scanf("%d", &num1);
    // Ask the user to enter the second number
    printf("Enter second number: ");
    scanf("%d", &num2);
    // Call the function to calculate the sum of the two numbers
    result = add_numbers(num1, num2);
    // Display the result
    printf("Sum = %d\n", result);
    return 0; // End of program
}
// Function definition: receives two integers and returns their sum
int add_numbers(int a, int b)
{
    return a + b; // Return the addition result
}

