#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", (int)log(num & -num));
    return 0;
}