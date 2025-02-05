
#include <stdio.h>

void main() {
    int a, b, c;

    // Prompting user for input
    scanf("%d %d %d", &a, &b, &c);

    // Check if the sum of any two sides is greater than the third
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }
}