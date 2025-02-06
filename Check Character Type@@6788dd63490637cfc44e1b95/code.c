#include <stdio.h>

int main() {
    char alpha;
    scanf("%c", &alpha);
    if ((char >= 'A' && char <= 'Z') || (char >= 'a' && char <= 'z' )) {
        if (char == 'a' || char == 'e' || char == 'i' || char == 'o' || char == 'u' || char == 'A' || char == 'E' || char == 'I' || char == 'O' || char == 'U') {
        printf("Vowel");
        }
        else {
            printf("Consonant");
        }
    }
    if ( alpha >= '0' && alpha <= '9') {
        printf("Digit");
    }
    else {
        printf("Invalid input");
    }
    return 0;
}