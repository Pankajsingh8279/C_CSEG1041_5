// Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int count = 0;

    // Count characters until null terminator
    while (str[count] != '\0') {
        count++;
    }

    // fgets adds newline, so remove it from count
    if (count > 0 && str[count - 1] == '\n') {
        count--;
    }

    printf("%d", count);
    return 0;
}

