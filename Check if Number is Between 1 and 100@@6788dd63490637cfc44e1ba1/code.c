#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if ( (num <= 100) && (num >= 1)) {
        printf("In Range");
    }
    else {
        printf("Out of Range");
    }
    return 0;
}