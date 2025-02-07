#include <stdio.h>

// Function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main() {
    int num1, num2;
    char operator;

    // Input the numbers and operator
    printf("Enter two integers followed by an operator (+, -, *, /): ");
    scanf("%d %d %c", &num1, &num2, &operator);

    // Perform calculation based on operator using if-else statements
    if (operator == '+') {
        printf("%d + %d = %d\n", num1, num2, add(num1, num2));
    } else if (operator == '-') {
        printf("%d - %d = %d\n", num1, num2, subtract(num1, num2));
    } else if (operator == '*') {
        printf("%d * %d = %d\n", num1, num2, multiply(num1, num2));
    } else if (operator == '/') {
        if (num2 != 0) {
            printf("%d / %d = %d\n", num1, num2, divide(num1, num2));
        } else {
            printf("Error: Division by zero!\n");
        }
    } else {
        printf("Error: Unsupported operator!\n");
    }

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}
