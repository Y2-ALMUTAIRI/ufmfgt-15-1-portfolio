/* Filename: Task4.c
Description: Computes area and perimeter of a right-angled triangle
Author: Youssef Al Mutairi
Date: 04/03/2026
*/
#include <stdio.h>
#include <math.h>
int main() {

    double base, height;
    double area, hypotenuse, perimeter;

    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter height: ");
    scanf("%lf", &height);

    if (base <= 0 || height <= 0) {
        printf("Invalid input. Values must be positive.\n");
    } else {
        area = 0.5 * base * height;
        hypotenuse = sqrt((base * base) + (height * height));
        perimeter = base + height + hypotenuse;
        printf("Hypotenuse: %.f\n", hypotenuse);
        printf("Area: %.f\n", area);
        printf("Perimeter: %.f\n", perimeter);
    }
    return 0;
}
