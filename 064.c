/* Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);

    int freq[10] = {0};  // To count occurrences of digits 0–9

    // Handle negative numbers
    if (num < 0)
        num = -num;

    // Count each digit's frequency
    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Find the digit with the maximum frequency
    int maxFreq = 0, mostFreqDigit = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFreqDigit = i;
        }
    }

    printf("%d\n", mostFreqDigit);
    return 0;
}
