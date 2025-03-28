#include <stdio.h>

void printAlternatingNumericTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        int start = i % 2; // Starting number (1 for odd rows, 0 for even rows)
        for (int j = 1; j <= i; j++) {
            printf("%d ", start);
            start = 1 - start; // Alternate between 1 and 0
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printAlternatingNumericTriangle(rows);
    return 0;
}