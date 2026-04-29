/*
Filename: Week4Task5.c
Author: Youssef Al Mutairi
Date: 06/03/2026
Description:Program that reverses a character array and prints it.
*/
#include <stdio.h>

int main() {

    char packet[6] = {'P','A','C','K','E','T'};
    int i;

    printf("Reversed Packet: ");

    for(i = 5; i >= 0; i--) {
        printf("%c", packet[i]);
    }

    printf("\n");

    return 0;
}

