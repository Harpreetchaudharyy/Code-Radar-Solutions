#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    num &= ~1;
    printf("%d", num)
    return 0;
}