// Write a program to print the following pattern:
*****
*****
*****
*****
*****

/*
Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/
#include <stdio.h>

int main() {
    int i, j;

    // Loop for 5 rows
    for (i = 0; i < 5; i++) {
        // Loop for 5 stars in each row
        for (j = 0; j < 5; j++) {
            printf("*");
        }
        printf("\n"); // Move to next line
    }

    return 0;
}

