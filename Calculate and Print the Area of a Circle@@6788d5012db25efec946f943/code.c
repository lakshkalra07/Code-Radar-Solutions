#include <stdio.h>

int main() {
    float rad;
    scanf("%f", &rad);
    float area = rad*rad*3.14;
    printf("Area: %.2f\n", area);
    return 0;
}