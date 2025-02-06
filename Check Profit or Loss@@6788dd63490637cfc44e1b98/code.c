#include <stdio.h>

int main() {
    int cost;
    int sell;
    scanf("%d %d", &cost, &sell);l
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