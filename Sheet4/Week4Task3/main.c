/*
* Filename: Week4Task3.c
 * Author: Youssef Al Mutairi
 * Date: 06/03/2026
 * Description: Displays the number of positive, negative, and zero values in an array of 12 integers.
 */
#include <stdio.h>
int main() {

    int codes[12] = {1, 5, -2, 0, 8, -1, 0, 0, 9, -4, 2, 1};
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;
    int i;

    for(i = 0; i < 12; i++) {

        if(codes[i] > 0)
            positiveCount++;

        else if(codes[i] < 0)
            negativeCount++;

        else
            zeroCount++;
    }
    printf("Positive codes: %d\n", positiveCount);
    printf("Negative codes: %d\n", negativeCount);
    printf("Zero codes: %d\n", zeroCount);
    return 0;
}
