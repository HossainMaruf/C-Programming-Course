#include <stdio.h>
void main() {
    int a = 10, b = 11;
    a++; // ++a
    b--; // --b
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    int c = a++;
    int d = --b;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);
    printf("a = %d", ++a);
    printf("b = %d", b++);
    printf("c = %d", --c);
    printf("d = %d", d--);
}