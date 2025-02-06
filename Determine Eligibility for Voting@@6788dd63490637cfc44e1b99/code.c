#include <stdio.h>

int main() {
    int Age;
    scanf("%d", &Age);
    if (Age<18){
        printf("Not Eligible");
    }
    else {
        printf("Eligible");
    }
    return 0;
}