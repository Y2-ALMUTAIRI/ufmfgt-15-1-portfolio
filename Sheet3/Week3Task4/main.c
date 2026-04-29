/*
* Filename: Week3Task4.c
 * Author: Youssef Al Mutairi
 * Date: 05/03/2026
 * Description: Converts a numerical grade (0-100) into a letter grade using a switch statement
 */
#include <stdio.h>
int main()
{
    int grade;
    printf("Enter grade: ");
    scanf("%d",&grade);
    if(grade<0 || grade>100)
    {
        printf("Invalid input\n");
        return 0;
    }
    switch(grade/10)
    {
        case 10:
        case 9:
        case 8: printf("Grade A\n"); break;
        case 7:
        case 6: printf("Grade B\n"); break;
        case 5:
        case 4: printf("Grade C\n"); break;
        case 3: printf("Grade D\n"); break;
        default: printf("Grade F\n");
    }
    return 0;
}