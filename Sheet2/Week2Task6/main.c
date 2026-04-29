/* Filename: Task6.c
Description: Generates a random number between 0 and X inclusive
Author: Youssef Al Mutairi
Date: 04/03/2026
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

    int X;
    int random_number;

    srand(time(NULL));
    printf("Enter value of X: ");
    scanf("%d", &X);

    if (X < 0) {
        printf("Invalid input. X must be non-negative.\n");
    } else {
        random_number = rand() % (X + 1);
        printf("Random number: %d\n", random_number);
    }

    return 0;
}
