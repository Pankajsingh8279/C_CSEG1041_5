// Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>

int main() {
    int m1, n1, m2, n2;
    int i, j, k;

    // Input for Matrix A
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &m1, &n1);

    int A[m1][n1];
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input for Matrix B
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &m2, &n2);

    int B[m2][n2];
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < m2; i++) {
        for (j = 0; j < n2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Check if multiplication possible
    if (n1 != m2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    // Result matrix C (m1 × n2)
    int C[m1][n2];

    // Initialize result matrix to 0
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            for (k = 0; k < n1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print result
    printf("\nResultant Matrix:\n");
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
