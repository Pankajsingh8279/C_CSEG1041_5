// Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Input time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Convert to hours, minutes, seconds
    hours = totalSeconds / 3600;           // 1 hour = 3600 seconds
    minutes = (totalSeconds % 3600) / 60; // Remaining minutes
    seconds = totalSeconds % 60;          // Remaining seconds

    // Display result
    printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}