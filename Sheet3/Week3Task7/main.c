/*
* Filename: Week3Task7.c
 * Author: Youssef Al Mutairi
 * Date: 05/03/2026
 * Description: Program that checks if a three-digit number is an Armstrong number.
 */
#include <stdio.h>
#include <math.h>

int main()
{
    int number, hundreds, tens, units;
    int sum;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    hundreds = number / 100;
    tens = (number % 100) / 10;
    units = number % 10;

    sum = pow(hundreds,3) + pow(tens,3) + pow(units,3);

    if(sum == number)
        printf("%d is an Armstrong number\n", number);
    else
        printf("%d is NOT an Armstrong number\n", number);

    return 0;
}
