/*
* Filename: Week5Task6.c
* Author: Youssef Al Mutairi
* Date: 06/03/2026
* Description: Program that attempts to swap two numbers.
*/
#include <stdio.h>
// Function prototype for swapping two integers
void swap(int a, int b);

int main()
{
    int x = 5;  // Initialize first variable
    int y = 10; // Initialize second variable
    swap(x, y); // Call swap function
    // Print values of x and y after the swap attempt
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    return 0; // End of program
}
// Function to swap two integers
void swap(int a, int b)
{
    int temp;  // Temporary variable to hold a value during swap
    temp = a;  // Store value of a in temp
    a = b;     // Assign value of b to a
    b = temp;  // Assign original value of a to b
}
