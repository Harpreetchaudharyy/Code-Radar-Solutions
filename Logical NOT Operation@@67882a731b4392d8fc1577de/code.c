#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a;
    scanf("%f" , &a);
    if (a > 0 ) {
        printf("False");
    }
    else{
        printf("True");
    }
    return 0;
}