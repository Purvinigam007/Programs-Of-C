//Design a tester that displays results of all arithmetic, relational, and logical operations.
#include <stdio.h>
int main() {
    int a = 10, b = 3;

    // Arithmetic operations
    printf("Arithmetic Operations:\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);   // integer division
    printf("%d %% %d = %d\n\n", a, b, a % b); // modulo

    // Relational operations
    printf("Relational Operations:\n");
    printf("%d > %d  = %d\n", a, b, a > b);
    printf("%d < %d  = %d\n", a, b, a < b);
    printf("%d >= %d = %d\n", a, b, a >= b);
    printf("%d <= %d = %d\n", a, b, a <= b);
    printf("%d == %d = %d\n", a, b, a == b);
    printf("%d != %d = %d\n\n", a, b, a != b);

    // Logical operations
    int x = 1, y = 0;
    printf("Logical Operations:\n");
    printf("%d && %d = %d\n", x, y, x && y);
    printf("%d || %d = %d\n", x, y, x || y);
    printf("!%d = %d\n", x, !x);
    printf("!%d = %d\n", y, !y);

    return 0;
}
