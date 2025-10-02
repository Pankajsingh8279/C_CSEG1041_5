// Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main() {
    // First group (1 star)
    printf("*\n\n");

    // Second group (3 stars)
    printf("*\n*\n*\n\n");

    // Third group (5 stars)
    printf("*\n*\n*\n*\n*\n\n");

    // Fourth group (3 stars)
    printf("*\n*\n*\n\n");

    // Fifth group (1 star)
    printf("*\n");

    return 0;
}
