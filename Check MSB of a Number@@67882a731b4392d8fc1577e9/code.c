#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // MSB mask for 32-bit integer: 1 shifted left by 31 positions
    int msb = 1 << 31;

    if (num & msb)
        printf("Set\n");
    else
        printf("Not Set\n");

    return 0;
}