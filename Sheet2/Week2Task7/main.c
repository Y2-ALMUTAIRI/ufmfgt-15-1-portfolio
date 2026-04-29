/* Filename: Task7.c
Description: Swaps two integer values using a temporary variable
Author: Youssef Al Mutairi
Date: 05/03/2026
*/
#include <stdio.h>

int main() {

    int a, b, temp;

    a = 7;
    b = -9;

    printf("/***************************************************************************/\n");

    printf("Initial values: a=%d; b=%d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("Swapped values: a=%d; b=%d\n", a, b);

    printf("/***************************************************************************/\n");

    return 0;
}