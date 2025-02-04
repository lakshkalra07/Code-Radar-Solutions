#include <stdio.h>

int main()
{
    int num;
    int positions;
    scanf("%d %d", &num, &positions);
    int leftShifted = num << positions;
    printf("%d\n", leftShifted);
    return 0;
}