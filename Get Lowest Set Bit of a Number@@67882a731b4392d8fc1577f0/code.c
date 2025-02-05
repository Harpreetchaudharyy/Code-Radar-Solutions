#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", (int)log2(num & -num));
    return 0;
}