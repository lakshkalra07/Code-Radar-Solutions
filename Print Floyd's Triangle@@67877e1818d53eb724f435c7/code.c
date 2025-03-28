#include <stdio.h>

void printFloydsTriangle(int n) {
    int number = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }
}

int main() {
    int rows;
    scanf("%d", &rows);

    printFloydsTriangle(rows);

    return 0;
}
