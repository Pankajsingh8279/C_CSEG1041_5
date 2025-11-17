// Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

int main() {
    int n, i, j;
    int symmetric = 1;  // assume true

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

    // Check symmetry
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (A[i][j] != A[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if (!symmetric)
            break;
    }

    // Output result
    if (symmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}

