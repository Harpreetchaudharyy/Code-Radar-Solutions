#include <stdio.h>

int main() {
    int number, n;
    
    // Read the number and the bit position (0-indexed)
    printf("Enter the number and the bit position to set: ");
    scanf("%d %d", &number, &n);
    
    // Create a mask by shifting 1 to the left by n positions
    int mask = 1 << n;
    
    // Set the nth bit using bitwise OR
    number = number | mask;
    
    printf("Number after setting bit %d: %d\n", n, number);
    
    return 0;
}