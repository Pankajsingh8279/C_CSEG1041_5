// Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char longest[100] = "";
    int maxLen = 0;

    fgets(str, sizeof(str), stdin);

    int i = 0, start = 0;

    while (1) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            int len = i - start;
            if (len > maxLen) {
                maxLen = len;
                strncpy(longest, &str[start], len);
                longest[len] = '\0';
            }
            start = i + 1;  
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("%s", longest);

    return 0;
}
