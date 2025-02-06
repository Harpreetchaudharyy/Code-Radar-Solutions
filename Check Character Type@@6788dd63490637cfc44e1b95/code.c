#include <stdio.h>

int main() {
    char alpha;
    scanf("%c", &alpha);
    if (char >= 'A' && char <= 'Z') {
        if (char == 'a','e','i','o','u') {
        printf("Vowel");
        }
        else {
            printf("Consonant");
        }
    }
    if ( char >= 1 && char <= 9) {
        printf("Digit");
    }
    else {
        printf("Invalid input");
    }
    return 0;
}