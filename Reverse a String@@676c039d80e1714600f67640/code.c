#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%99s", str);
    int length = strlen(str);
    printf("Reversed String: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    return 0;
}