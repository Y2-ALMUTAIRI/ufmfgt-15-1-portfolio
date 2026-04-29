/*
 Filename: Week6Task2.c
 Author: Youssef Al Mutairi
 Date: 23/04/2026
*/
#include <stdio.h>
#include <stdlib.h>
void foo1(int xval){
 int x;
 x = xval;
 printf("The address of x is %p\n", &x);
}
void foo2(int yval){
 int y;
 y = yval;
 printf("The address of y is %p\n", &y);
}

void foo3(void){
 int z;
 foo1(z);
}

int main(void){
 foo1(7);
 foo2(11);
 foo3();

 system("PAUSE");
 return 0;
}
