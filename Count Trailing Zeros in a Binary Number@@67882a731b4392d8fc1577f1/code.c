#include <stdio.h>

int countTrailingZeros(int n) {
    if (n == 0) return 32; // Special case: all bits are zero

    int count = 0;
    while ((n & 1) == 0) { // Check if the least significant bit (LSB) is 0
        count++;
        n >>= 1; // Shift right to check the next bit
    }

    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", countTrailingZeros(n));
    return 0;
}