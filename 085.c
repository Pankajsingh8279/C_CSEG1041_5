// Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>

int main() {
    char str[200];
    int len = 0;

    // Input string
    fgets(str, sizeof(str), stdin);

    // Find length manually
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    // Reverse printing
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
