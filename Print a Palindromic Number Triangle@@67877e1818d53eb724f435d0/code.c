#include <stdio.h>

void printPalindromicNumberTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        // Print the increasing sequence
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Print the decreasing sequence
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        // Move to the next line
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printPalindromicNumberTriangle(rows);
    return 0;
}