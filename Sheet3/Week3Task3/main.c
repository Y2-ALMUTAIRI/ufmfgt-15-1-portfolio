/*
Filename: Week3Task3.c
Author: Youssef Al Mutairi
Date:05/03/2026
Description: OTP guessing game: user has 3 tries to guess a random number between 1 and 100
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess;

    srand(time(NULL));
    number = rand()%100 + 1;

    printf("Guess the number (1-100)\n");

    printf("Attempt 1: ");
    scanf("%d",&guess);

    if(guess==number)
        printf("Correct!\n");
    else
    {
        if(guess>number) printf("Too high\n");
        else printf("Too low\n");

        printf("Attempt 2: ");
        scanf("%d",&guess);

        if(guess==number)
            printf("Correct!\n");
        else
        {
            if(guess>number) printf("Too high\n");
            else printf("Too low\n");

            printf("Attempt 3: ");
            scanf("%d",&guess);

            if(guess==number)
                printf("Correct!\n");
            else
                printf("You lost. The number was %d\n",number);
        }
    }

    return 0;
}
