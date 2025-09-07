#include <stdio.h>
void main() {
    int a = 10, b = 11;
    a++; // ++a
    --b; // b--
    printf("a = %d\n", a); // 11
    printf("b = %d\n", b); // 10
    int c = a++; // c = 11, a = 12
    int d = --b; // b = 9, d = 9

    printf("a = %d\n", a); // 12
    printf("b = %d\n", b); // 9
    printf("c = %d\n", c); // 11
    printf("d = %d\n", d); // 9

    printf("a = %d\n", ++a); // 13, a = 13
    printf("b = %d\n", b++); // 9, b = 10
    printf("c = %d\n", --c); // 10, c = 10
    printf("d = %d\n", d--); // 9, d = 8
}