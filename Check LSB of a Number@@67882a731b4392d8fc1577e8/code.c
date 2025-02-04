#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    num &= ~1;
    if (num == 1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    
    return 0;
}