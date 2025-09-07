// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include <stdio.h>

int main() {
    int num1, num2, result;
    char op;

    // Input
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);   // space before %c to avoid newline issue
    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result = %d\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %d\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %d\n", result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result = %d\n", result);
            } else {
                printf("Error! Division by zero not allowed.\n");
            }
            break;

        case '%':
            if (num2 != 0) {
                result = num1 % num2;
                printf("Result = %d\n", result);
            } else {
                printf("Error! Modulus by zero not allowed.\n");
            }
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}