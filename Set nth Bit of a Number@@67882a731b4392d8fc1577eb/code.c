#include <stdio.h>

int main() {
    int number, n;
    scanf("%d %d", &number, &n);
    
    int mask = 1 << n;
    number = number | mask;
    printf("%d", n, number);
    
    return 0;
}