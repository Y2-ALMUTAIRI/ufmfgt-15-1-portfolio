/*
 Filename: Week7Task1.c
 Author: Youssef Al Mutairi
 Date: 27/04/2026
 */

#include <stdio.h>
     // (a) Structure declaration
struct Complex {
    double real;
    double imaginary;
};

int main() {
    // (b) Initialization
    struct Complex c1 = {2.0, 3.0};
    struct Complex c2 = {4.0, 5.0};
    struct Complex c3;

    // (c) Copy c2 into c1 (can be done in one statement)
    // c1 = c2;

    // (d) Addition
    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;

    // Display results
    printf("c1 = (%.1f, %.1f)\n", c1.real, c1.imaginary);
    printf("c2 = (%.1f, %.1f)\n", c2.real, c2.imaginary);
    printf("c3 = (%.1f, %.1f)\n", c3.real, c3.imaginary);

    return 0;
}


