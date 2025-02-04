#include <stdio.h>

int main() {
    char word1[100];
    char word2[100];
    scanf("%99s %99s", word1, word2);
    printf("You entered: %s and %s\n", word1, word2);
    return 0;
}