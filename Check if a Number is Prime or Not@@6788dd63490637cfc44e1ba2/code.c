#include <stdio.h>

int main() {
    int num, i = 2;
    scanf("%d", &num);

    if (num <= 1) {
        printf("%Not Prime\n");
    } else {
        while (i < num) {
            if (num % i == 0) {
                printf("%Not Prime\n");
                break;
            }
            i++;
        }
        if (i == num) {
            printf("%Prime\n");
        }
    }

    return 0;
}
