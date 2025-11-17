// Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main() {
    int m, n, i, j;
    printf("Enter rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    int A[m][n];

    // Input matrix
    printf("Enter matrix elements:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Check only main diagonal if square matrix
    if (m != n) {
        printf("False\n");  // diagonal concept applies to square matrix only
        return 0;
    }

    int distinct = 1;  // assume distinct

    // Check if diagonal elements are unique
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (A[i][i] == A[j][j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct)
            break;
    }

    if (distinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
