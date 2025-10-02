// Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include <stdio.h>

int main() {
    int i, j;
    int n = 5; // Number of rows in the top half (odd numbers)

    // Top half
    for(i = 1; i <= n; i += 2) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half
    for(i = n-2; i >= 1; i -= 2) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
