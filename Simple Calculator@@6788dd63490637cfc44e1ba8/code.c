#include <stdio.h>

int main() {
    int a , b;
    char op;
    scanf("%d %d %c", &a,&b,&op);
    switch (op) {
        case '+':
        printf("%d", a + b);
        break;
        case '-':
        printf("%d", a - b);
        break;
        case '*':
        printf("%d", a * b);
        break;
        case '/':
        if (a != 0)
            printf(" %d\n", a / b);
        else
            printf("error\n");
        break;
        default:
        printf("Invalid");
        break;
    }

  return 0;
}