#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int lsb = num & -num;
    printf("%d\n", lsb);
    return 0;
}