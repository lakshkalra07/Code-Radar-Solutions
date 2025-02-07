#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num;
    scanf("%d", num);
    if (num % 3 == 0 && num % 5==0){
        printf("Divisible by Both\n");
    }
    else if (num % 3 == 0){
        printf("Divisible by\n", 3);
    }
    else if (num % 5 == 0){
        printf("Divisible by\n", 5);
    }
    else {
        printf("Bot Divisible\n");
    }
return 0;
}