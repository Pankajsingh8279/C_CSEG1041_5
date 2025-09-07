// Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input
    printf("Enter n: ");
    scanf("%d", &n);

    // Calculate sum of first n odd numbers
    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1);  // ith odd number
    }

    // Output
    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}