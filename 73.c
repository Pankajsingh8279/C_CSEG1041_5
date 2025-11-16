// Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int arr[r][c];
    int rowSum[r];

    // Read matrix
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate row sums
    for(int i = 0; i < r; i++) {
        int sum = 0;
        for(int j = 0; j < c; j++) {
            sum += arr[i][j];
        }
        rowSum[i] = sum;
    }

    // Print row sum array
    for(int i = 0; i < r; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}
