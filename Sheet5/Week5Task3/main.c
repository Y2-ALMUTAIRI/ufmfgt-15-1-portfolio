/*
* Filename: Week5Task3.c
* Author: Youssef Al Mutairi
* Date: 06/03/2026
* Description: Program that calculates the circumference and area of a circle using functions.
*/
#include <stdio.h>
const double PI = 3.14159;  // Define constant value of PI

// Function prototype to calculate circumference
double calculate_circumference(double r);

// Function prototype to calculate area
double calculate_area(double r);

int main()
{
    // Variable to store the radius
    double radius;

    // Prompt the user to enter the radius
    printf("Enter radius: ");
    scanf("%lf", &radius);

    // Check if the entered radius is positive
    if(radius <= 0) {
        printf("Error: Radius must be positive.\n");
        return 1; // Exit program with error
    }

    // Calculate and display the circumference
    printf("Circumference = %.2f\n", calculate_circumference(radius));

    // Calculate and display the area
    printf("Area = %.2f\n", calculate_area(radius));

    return 0; // End of program
}

// Function to calculate circumference of a circle
double calculate_circumference(double r)
{
    return 2 * PI * r; // Formula: 2 * π * radius
}

// Function to calculate area of a circle
double calculate_area(double r)
{
    return PI * r * r; // Formula: π * radius^2
}

