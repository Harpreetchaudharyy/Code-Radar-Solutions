#include <stdio.h>

int main() {
    
    int n, num;
    scanf("%d %d", &num, &n);
    int bit = (num >> n) & 1;
    printf("%d\n", bit);

    return 0;
}