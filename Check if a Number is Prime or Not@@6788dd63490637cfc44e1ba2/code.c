/*#include <stdio.h>

int main() {
    int num, i = 2;
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not Prime\n");
    } else {
        while (i < num) {
            if (num % i == 0) {
                printf("Not Prime\n");
                break;
            }
            i++;
        }
        if (i == num) {
            printf("Prime\n");
        }
    }

    return 0;
}
OR
*/
#include <stdio.h>

int main() {
    int num, i, flag = 0;
    scanf("%d", &num);
    if (num <= 1) {
        printf("Not Prime\n");
        return 0;
    }
    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}