#include <stdio.h>
#define ARRAYSIZE 5

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
    printf("]");
}

double dot_product(int A[], int B[], int size) {
    double result = 0;
    for (int i = 0; i < size; i++) {
        result += A[i] * B[i];
    }
    return result;
}

int main(void) {
    int vec1[ARRAYSIZE], vec2[ARRAYSIZE];
    double product;

    printf("Vector 1:\n");
    readarray(vec1, ARRAYSIZE);

    printf("Vector 2:\n");
    readarray(vec2, ARRAYSIZE);

    product = dot_product(vec1, vec2, ARRAYSIZE);

    printf("\nDot product of ");
    printarray(vec1, ARRAYSIZE);
    printf(" and ");
    printarray(vec2, ARRAYSIZE);
    printf(" = %.2f\n", product);

    return 0;
}
