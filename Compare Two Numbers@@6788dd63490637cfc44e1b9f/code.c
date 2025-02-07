#include <stdio.h>

int main() {
    int num1;
    int num2;
    scanf("%d %d", &num1, &num2);
    if (num1>num2){
        printf("First\n");
    }
    else if (num1<num2){
        printf("Second\n");
    }
    else {
        printf("Equal\n");
    }
    return 0;
}