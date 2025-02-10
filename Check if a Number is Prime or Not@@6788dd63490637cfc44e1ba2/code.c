#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if ((num <= 1) && (num % 2 == 0)) {
        for (int i = 3; i<= sqrt(num); i+=2) {
        printf("Not Prime");
        }
    }
    else {
        printf("Prime");
    }
    return 0;
}