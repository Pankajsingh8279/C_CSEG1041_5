//  Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k;
    if (scanf("%d", &n) != 1) return 0;

    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) scanf("%d", &arr[i]);
    if (scanf("%d", &k) != 1) { free(arr); return 0; }
    if (k <= 0 || k > n) {
        free(arr);
        return 0;
    }

    int *dq = (int*)malloc(n * sizeof(int));
    int front = 0, back = 0; 
    
    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0) {
            dq[back++] = i;
        }

        if (i >= k - 1) {
            while (front < back && dq[front] < i - k + 1) front++;

            if (front < back) {
                printf("%d", arr[dq[front]]);
            } else {
                printf("0");
            }

            if (i != n - 1) printf(" ");
        }
    }

    printf("\n");
    free(arr);
    free(dq);
    return 0;
}
