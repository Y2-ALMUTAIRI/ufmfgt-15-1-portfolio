/*
Filename: Week6Task5.c
 Author: Youssef Al Mutairi
 Date: 24/04/2026
*/
#include <stdio.h>
#define ARRAYSIZE 10
int arr1[ARRAYSIZE], arr2[ARRAYSIZE], arr3[ARRAYSIZE];
void readarray(int A[], int n) {
 int i;
 printf("Enter %d integers (separated by spaces) into array: ", n);
 for (i = 0; i < n; i++)
  scanf("%d", &A[i]);
}
void printarray(int A[], int n) {
 int i;
 printf("Array elements: ");
 for (i = 0; i < n; i++) {
  printf("%d ", A[i]);
 }
 printf("\n");
}
int main(void) {
 printf("Testing with arr1:\n");
 readarray(arr1, ARRAYSIZE);
 printarray(arr1, ARRAYSIZE);
 printf("\nTesting with arr2 (5 elements):\n");
 readarray(arr2, 5);
 printarray(arr2, 5);
 return 0;
}


