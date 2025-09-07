// Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;  // Use long long for large results

    // Input
    printf("Enter n: ");
    scanf("%d", &n);

    // Calculate product of even numbers
    for (i = 2; i <= n; i += 2) {
        product *= i;
    }

    // If n < 2, no even numbers
    if (n < 2) {
        printf("No even numbers in the range 1 to %d.\n", n);
    } else {
        printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    }

    return 0;
}