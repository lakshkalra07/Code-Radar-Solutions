#include <stdio.h>

int main() {
    int rad;
    scanf("%d", &rad);
    float area = rad*rad*3.14;
    printf("Area: %.2f\n", area);
    return 0;
}