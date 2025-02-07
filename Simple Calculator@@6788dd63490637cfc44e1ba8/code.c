#include <stdio.h>

int main() {
    int num1;
    int num2;
    char operator;
    scanf("%d %d", &num1, &num2);
    scanf(" %c", &operator);

    if (operator == '+') {
        printf("%d\n", num1 + num2);
    } else if (operator == '-') {
        printf("%d\n", num1 - num2);
    } else if (operator == '*') {
        printf("%d\n", num1 * num2);
    } else if (operator == '/') {
        if (num2 != 0) {
            printf("%d\n", num1 / num2);
        } else {
            printf("error\n");
        }
    } else {
        printf("error\n");
    }

    return 0;
}
