#include <stdio.h>
void main() {
    int a = 5, b = 10;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    int temp = b;
    b = a;
    a = temp;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}