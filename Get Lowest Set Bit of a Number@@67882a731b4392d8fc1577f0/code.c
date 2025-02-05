#include <stdio.h>

int main() {
    int num, pos = 0;
    scanf("%d", &num);

    while ((n & 1) == 0){
        n >>= 1;
        pos++;
    }
    printf("%d\n", pos);
    return 0;
}