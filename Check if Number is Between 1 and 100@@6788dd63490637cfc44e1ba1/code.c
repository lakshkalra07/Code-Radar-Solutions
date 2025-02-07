#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num<=100 && num>0){
        printf("In Range\n");
    }
    else {
        printf("Out of Range\n");
    }
    return 0;
}