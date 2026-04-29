/*
* Filename: Week3Task5.c
 * Author: Youssef Al Mutairi
 * Date: 05/03/2026
 * Description: Check whether the number is positive, negative, or zero, and whether it is odd or even
 */
#include <stdio.h>

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d",&n);

    if(n<-10 || n>10)
        printf("Error: out of range\n");
    else
    {
        if(n>0) printf("Positive\n");
        else if(n<0) printf("Negative\n");
        else printf("Zero\n");

        if(n%2==0) printf("Even\n");
        else printf("Odd\n");
    }

    return 0;
}