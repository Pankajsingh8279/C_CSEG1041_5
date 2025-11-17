// Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int A[n][n];

    // Input matrix
    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Sum of main diagonal
    for (i = 0; i < n; i++) {
        sum += A[i][i];
    }

    // Output
    printf("%d\n", sum);

    return 0;
}

