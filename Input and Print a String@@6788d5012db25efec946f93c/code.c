#include <stdio.h>

int main() {
    char str[100];
    scantf("%s", &str);
    printf("You entered: %s\n", str);
    return 0;
}