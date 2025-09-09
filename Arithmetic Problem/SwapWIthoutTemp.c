#include <stdio.h>
void main() {
    int a = 5, b = 10;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    // a = a + b;
    // b = a - b;
    // a = a - b;
    a = a*b;
    b = a/b;
    a = a/b;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}