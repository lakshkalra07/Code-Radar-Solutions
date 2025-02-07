#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (0<num<=100){
        printf("In Range\n");
    }
    else {
        printf("Out of Range\n");
    }
    return 0;
}