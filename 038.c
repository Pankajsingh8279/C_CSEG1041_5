// write a program  to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Process each digit
    while (num != 0) {
        digit = num % 10;   // Extract last digit
        sum += digit;       // Add to sum
        num /= 10;          // Remove last digit
    }

    // Output result
    printf("Sum of digits = %d\n", sum);

    return 0;
}
