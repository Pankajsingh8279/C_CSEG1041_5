// Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
    int m, n;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    int A[m][n];

    // Input matrix
    printf("Enter matrix elements:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Diagonal traversal
    for (int k = 0; k < m + n - 1; k++) {
        if (k % 2 == 0) {
            // Even diagonal → bottom to top
            for (int i = k; i >= 0; i--) {
                int j = k - i;
                if (i < m && j < n)
                    printf("%d ", A[i][j]);
            }
        } else {
            // Odd diagonal → top to bottom
            for (int j = k; j >= 0; j--) {
                int i = k - j;
                if (i < m && j < n)
                    printf("%d ", A[i][j]);
            }
        }
    }

    return 0;
}
