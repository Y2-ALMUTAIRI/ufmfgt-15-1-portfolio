/*
* Filename: Week3Task1.c
 * Author: Youssef Al Mutairi
 * Date: 05/03/2026
 * Description: Program that finds the minimum value among four numbers
 */
#include <stdio.h>
int main(void)
{
    int n1, n2, n3, n4, min;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("Enter third number: ");
    scanf("%d", &n3);
    printf("Enter fourth number: ");
    scanf("%d", &n4);
    min = n1;
    if (n2 < min)
        min = n2;
    if (n3 < min)
        min = n3;
    if (n4 < min)
        min = n4;
    printf("Minimum value is: %d\n", min);
    return 0;
}
