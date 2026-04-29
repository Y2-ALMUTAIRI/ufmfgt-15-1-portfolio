/*
Filename:Week4Task4.c
Author: Youssef Al Mutairi
Date: 06/03/2026
Description: Program that finds a code in an array and shows its position or “Not Found.”
*/
#include <stdio.h>

int main() {

    int codes[15] = {10, 25, 17, 8, 42, 33, 5, 18, 21, 30, 12, 7, 55, 3, 9};
    int target, found = 0;
    int i;

    printf("Enter code to search: ");
    scanf("%d", &target);

    for(i = 0; i < 15; i++) {

        if(codes[i] == target) {
            printf("Access Code Found at Position %d\n", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Code Not Found\n");
    return 0;
}
