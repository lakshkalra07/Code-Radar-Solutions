#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year check
    if (year % 4 == 0) {
        printf("%d is a Leap Year.\n", year);

    } else
        printf("%d is not a Leap Year.\n", year);

    return 0;
}