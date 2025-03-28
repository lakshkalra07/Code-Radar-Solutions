#include <stdio.h>

void printNumbers(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", i); // Print numbers with a space
    }
    printf("\n"); // Move to the next line after printing all numbers
}

int main() {
    int n;
    scanf("%d", &n); // Take input for N
    printNumbers(n); // Function call to print numbers from 1 to N
    return 0;
}