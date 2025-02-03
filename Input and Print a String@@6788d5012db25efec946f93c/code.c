#include <stdio.h>

int main() {
    char word[100];
    scantf("%s", word);
    printf("You entered: %s\n", word);
    return 0;
}