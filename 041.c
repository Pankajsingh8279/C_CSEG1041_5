// Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;  // extract last digit

    // find total digits
    digits = (int)log10(num);

    // extract first digit
    first = num / (int)pow(10, digits);

    // remove first and last digits
    int middle = num % (int)pow(10, digits);
    middle = middle / 10;

    // form the swapped number
    swapped = last * (int)pow(10, digits) + middle * 10 + first;

    printf("Number after swapping first and last digit = %d\n", swapped);

    return 0;
}
