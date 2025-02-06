#include <stdio.h>

int main() {
    int cost;
    int sell;
    scanf("%d %d", &cost, &sell);
    if (sell>cost){
        printf("Profit\n");
    }
    else if(sell==cost){
        printf("No Profit No Loss\n");
    }
    else {
        printf("Loss\n");
    }
    return 0;
}