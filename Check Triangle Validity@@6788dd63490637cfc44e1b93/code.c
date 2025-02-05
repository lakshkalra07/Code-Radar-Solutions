/*#include <stdio.h>

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
}*/
#include <stdio.h>

void main() {
    int a, b, c;

    // Prompting user for input
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if the sum of any two sides is greater than the third
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }