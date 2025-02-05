#include <stdio.h>

void decimalToBinary(int n) {
    if (n > 1) {
        decimalToBinary(n / 2); // Recursively divide by 2
    }
    printf("%d", n % 2); // Print remainder (binary digit)
}

int main() {
    int n;
    scanf("%d", &n);
    decimalToBinary(n);
    printf("\n"); // Newline for output formatting
    return 0;
}