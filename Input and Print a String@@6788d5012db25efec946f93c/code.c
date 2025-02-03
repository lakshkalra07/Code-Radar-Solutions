#include <stdio.h>

int main() {
    char str[100];
    scantf("%s", &str);
    printf("You entered: %99s\n", str);
    return 0;
}