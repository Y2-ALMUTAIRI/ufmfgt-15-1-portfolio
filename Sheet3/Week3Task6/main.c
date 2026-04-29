/*
* Filename: Week3Task6.c
 * Author: Youssef Al Mutairi
 * Date: 05/03/2026
 * Description: Simple calculator that performs an operation on two user-entered numbers
 */
#include <stdio.h>
#include <math.h>
int main()
{
    double num1, num2, result;
    char op;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter operator (+ - * / %% ^): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    switch(op)
    {
        case '+':
            result = num1 + num2;
            printf("Result = %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result = %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result = %.2lf\n", result);
            break;
        case '/':
            if(num2 == 0)
                printf("Error: Division by zero\n");
            else
            {
                result = num1 / num2;
                printf("Result = %.2lf\n", result);
            }
            break;
        case '%':
            printf("Result = %d\n", (int)num1 % (int)num2);
            break;
        case '^':
            result = pow(num1, num2);
            printf("Result = %.2lf\n", result);
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
