#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if ( b <= a && b <= a ) {
        printf("%d", a);
    }
    else if ( a <= b && c <= b) {
        printf("%d", b);
    }
    else if ( b <= c && a <= c) {
        printf("%d", c);
    }
    else {
        printf("Invalid input");
    }
    return 0;
}