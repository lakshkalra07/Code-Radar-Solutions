#include <stdio.h>

int main() {
    char Grade;
    scanf("%c", &Grade);
    if (Grade==A){
        printf("Excellent\n");
    }
    else if (Grade==B){
        printf("Good\n");
    }
    else if (Grade==C){
        printf("Average\n");
    }
    else if (Grade==D){
        printf("Below Average\n");
    }
    else if (Grade==F){
        printf("Feil\n");
    }
    else{
        printf("Invalid grade\n");
    }
    return 0;
}