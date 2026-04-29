#include <stdio.h>
#define ARRAYSIZE 8

void readarray(int A[], int n) {
    int i;
    printf("Enter %d integers (separated by spaces): ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
}

void printarray(int A[], int n) {
    int i;
    printf("[");
    for (i = 0; i < n; i++) {
        printf("%d", A[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");
}

void crossover(int p1[], int p2[], int c1[], int c2[], int n, int k) {
    int i;
    // First part: elements 0 to k-1
    for (i = 0; i < k; i++) {
        c1[i] = p1[i];
        c2[i] = p2[i];
    }
    // Second part: elements k to n-1
    for (i = k; i < n; i++) {
        c1[i] = p2[i];
        c2[i] = p1[i];
    }
}
int main(void) {
    int parent1[ARRAYSIZE], parent2[ARRAYSIZE];
    int child1[ARRAYSIZE], child2[ARRAYSIZE];
    int crosspoint;
    printf("Parent 1:\n");
    readarray(parent1, ARRAYSIZE);
    printf("Parent 2:\n");
    readarray(parent2, ARRAYSIZE);
    printf("Enter crosspoint (0 to %d): ", ARRAYSIZE - 1);
    scanf("%d", &crosspoint);
    crossover(parent1, parent2, child1, child2, ARRAYSIZE, crosspoint);
    printf("\nResults\n");
    printf("Parent 1: "); printarray(parent1, ARRAYSIZE);
    printf("Parent 2: "); printarray(parent2, ARRAYSIZE);
    printf("Crosspoint: %d\n", crosspoint);
    printf("Child 1:  "); printarray(child1, ARRAYSIZE);
    printf("Child 2:  "); printarray(child2, ARRAYSIZE);
    return 0;
}


