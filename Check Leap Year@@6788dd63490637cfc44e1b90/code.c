#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);
    if (year % 4 == 0) {
        printf("Leap Year");
    }
    else {
        pritnf("Not a Leap Year");
    }
    return 0;
}