#include <stdio.h>

int main() {
    char alpha;
    scanf("%c", &alpha);
    if ((alpha >= 'A' && alpha <= 'Z') || (alpha >= 'a' && alpha <= 'z' )) {
        if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u' || alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U') {
        printf("Vowel");
        }
        else {
            printf("Consonant");
        }
    }
    else if ( alpha >= '0' && alpha <= '9') {
        printf("Digit");
    }
    else {
        printf("Invalid input");
    }
    return 0;
}