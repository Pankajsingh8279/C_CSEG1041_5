// Write a program to print the following pattern:
*
**
***
****
*****

/*
Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/
#include <stdio.h>

int main() {
    int i, j;

    // Loop for 5 rows
    for(i = 1; i <= 5; i++) {
        // Print stars in each row
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
