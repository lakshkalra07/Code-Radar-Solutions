#include <stdio.h>

void printReverseAlphabetTriangle(int n) {
    for (int i = n; i >= 1; i--) {
        char letter = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c", letter);
            letter++;
        }
        printf("\n");
    }
}

int main() {
    int rows;
    scanf("%d", &rows);
    printReverseAlphabetTriangle(rows);

    return 0;
}
