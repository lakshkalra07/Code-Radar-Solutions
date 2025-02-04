#include <stdio.h>

int main() {
    int num1;
    int num2;
    int num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    int avg = (num1+num2+num3)/3;
    printf("Average: %.2d\n", avg);
    return 0;
}