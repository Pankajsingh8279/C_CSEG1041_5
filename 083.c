// Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>

int main() {
    char str[200];
    int vowels = 0, consonants = 0;

    // Input string
    fgets(str, sizeof(str), stdin);

    // Counting vowels and consonants
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check for alphabets
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {

            // Convert to lowercase for easy checking
            char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

            if (lower == 'a' || lower == 'e' || lower == 'i' ||
                lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels=%d, Consonants=%d", vowels, consonants);

    return 0;
}
