// Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)
 
*/

#include <stdio.h>

int main() {
    int num, digit, product = 1, hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle each digit
    while (num > 0) {
        digit = num % 10; // get last digit
        if (digit % 2 != 0) {  // check if odd
            product *= digit;
            hasOdd = 1;
        }
        num /= 10; // remove last digit
    }

    if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}

         