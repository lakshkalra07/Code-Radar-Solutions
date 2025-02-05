#include <stdio.h>

int main() {
    int num1;
    int num2;
    int num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    if ((num1*num1 + num2*num2 == num3*num3)||(num1*num1 + num3*num3 == num2*num2)||(num3*num3 + num2*num2 == num1*num1)){
        printf("Valid\n");
    }
    else{
        printf("Invalid\n");
    }
    return 0;
}