#include <stdio.h>

int main() {
    int age;
    int num;
    scanf("%d %d", &age, &num);
    if (age>=18 && num == 1){
        printf("Eligible\n");
    }
    else{
        printf("Not Eligible\n");
    }
    return 0;
}