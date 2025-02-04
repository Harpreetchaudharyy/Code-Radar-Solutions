#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    num &= ~1;
    if (num == 1){
        print("Set");
    }
    else{
        printf("Not Set")
    }
    
    return 0;
}