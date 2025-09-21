#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int div(int a, int b) { return a / b; }

void main() {
    int (*fp[4])(int, int) = {add, sub, mul, div};
    for(int i=0; i<4; i++) {
        printf("Result = %d\n", fp[i](10, 3));
    }
}