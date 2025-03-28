#include <stdio.h>

void printNumberTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        // Print leading spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            printf(" "); // Add a space before the numbers
        }
        // Print numbers
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n"); // Move to the next line after each row
    }
}

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printNumberTriangle(rows);
    return 0;
}