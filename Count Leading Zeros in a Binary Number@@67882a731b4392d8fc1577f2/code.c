#include <stdio.h>

int countLeadingZeros(int n) {
    if (n == 0) return 32;  // Special case: all bits are zero

    int count = 0;
    int mask = 1 << 31; // Start with the leftmost bit (MSB of 32-bit integer)

    while ((n & mask) == 0) { // Check if MSB is 0
        count++;
        mask >>= 1; // Shift mask to the right
    }

    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", countLeadingZeros(n));
    return 0;
}