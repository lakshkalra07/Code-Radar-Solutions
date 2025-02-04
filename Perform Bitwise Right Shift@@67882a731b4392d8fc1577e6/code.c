#include <stdio.h>

int main()
{
    int num;
    int positions;
    scanf("%d %d", &num, &positions);
    int RightShifted = num >> positions;
    printf("%d\n", RightShifted);
    return 0;
}