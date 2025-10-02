// Write a program to print the following pattern:
1
12
123
1234
12345

/*
Sample Test Cases:
Input 1:

Output 1:
1
12
123
1234
12345

*/
#include <stdio.h>

int main() {
    int i, j;

    // Loop for 5 rows
    for(i = 1; i <= 5; i++) {
        // Print numbers in each row
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
