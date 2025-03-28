#include <stdio.h>

void printAlphabetPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        char letter = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c ", letter);
            letter++;
        }
        printf("\n");
    }
}

int main() {
    int rows;
    scanf("%d", &rows);
    printAlphabetPyramid(rows);

    return 0;
}
