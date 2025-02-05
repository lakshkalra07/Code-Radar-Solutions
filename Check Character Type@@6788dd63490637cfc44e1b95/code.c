#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if (isalpha(ch)) {
        switch (tolower(ch)) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                printf("Vowel\n");
                break;
            default:
                printf("Consonant\n");
                break;
        }
    } else if (isdigit(ch)) {
        printf("Digit\n");
    } else {
        printf("Special Character\n");
    }

    return 0;
}
