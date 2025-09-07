// Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse logic
    while (num != 0) {
        remainder = num % 10;              // Get last digit
        reversed = reversed * 10 + remainder; // Build reversed number
        num = num / 10;                   // Remove last digit
    }

    // Output
    printf("Reversed number = %d\n", reversed);

    return 0;
}
