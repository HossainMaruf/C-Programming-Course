#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int div(int a, int b) { return a / b; }

void main() {
    int (*fp) (int, int) = NULL; // point to nowhere
    fp = add; // fp = &add;
    printf("Result = %d\n", fp(3, 4));
    fp = sub; // fp = &sub;
    printf("Result = %d\n", fp(3, 4));
    fp = mul; // fp = &mul;
    printf("Result = %d\n", fp(3, 4));
    fp = div; // fp = &div;
    printf("Result = %d\n", fp(3, 4));
}