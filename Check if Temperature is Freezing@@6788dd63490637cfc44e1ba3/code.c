#include <stdio.h>

int main() {
    int Temp;
    scanf("%d", &Temp);
    if (Temp<=0){
        printf("Freezing\n");
    }
    else {
        printf("Above Freezing\n")
    }
    return 0;
}