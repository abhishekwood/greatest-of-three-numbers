#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter your first number: ");
    scanf("%d", & a);

    printf("Enter your second number: ");
    scanf("%d", & b);

    printf("Enter your third number: ");
    scanf("%d", & c);

    if (a > b && a > c) {
        printf("%d is greatest", a);
    }
    else if (b > a && b > c) {
        printf("%d is greatest", b);
    }
    else {
        printf("%d is greatest", c);
    }

    return 0;
}
