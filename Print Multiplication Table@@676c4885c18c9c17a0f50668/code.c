#include <stdio.h>

void printMultiplicationTable(int n) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    int number;
    scanf("%d", &number); // Taking input from the user
    printMultiplicationTable(number); // Printing the multiplication table for the number
    return 0;
}