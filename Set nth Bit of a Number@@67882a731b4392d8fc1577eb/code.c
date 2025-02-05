#include <stdio.h>

int main() {
    int number, n;
    
    printf("Enter the number and the bit position to set: ");
    scanf("%d %d", &number, &n);
    
    int mask = 1 << n;
    
    number = number | mask;
    
    printf("Number after setting bit %d: %d\n", n, number);
    
    return 0;
}