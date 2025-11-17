//  Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    char str[200];
    int len = 0, flag = 1;

    // Input string
    fgets(str, sizeof(str), stdin);

    // Find length (ignore newline)
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    // Check palindrome
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
