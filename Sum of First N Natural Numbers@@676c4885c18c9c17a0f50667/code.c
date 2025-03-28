#include <stdio.h>

int main() {
    int N, sum = 0;
    
    // Take input
    scanf("%d", &N);
    
    // Loop to calculate sum
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    
    // Print the result
    printf("%d\n", sum);
    
    return 0;
}
