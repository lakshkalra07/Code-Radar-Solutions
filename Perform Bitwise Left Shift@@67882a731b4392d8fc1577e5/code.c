#include <stdio.h>

int main()
{
    int num;
    int positions[1];
    scanf("%d", &num);
    scanf("%d", &positions);
    int leftShifted = num << positions;
    printf("%d\n", leftShifted);
    return 0;
}