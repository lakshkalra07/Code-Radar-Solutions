#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year check
    if (year % 4 == 0) {
        printf("Leap Year\n");

    } else
        printf("Not a Leap Year\n");

    return 0;
}