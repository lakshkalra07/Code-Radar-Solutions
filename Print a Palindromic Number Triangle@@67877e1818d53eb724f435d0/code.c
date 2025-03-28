#include <stdio.h>

void printPalindromicNumberTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        // Printing the increasing part
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Printing the decreasing part
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
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