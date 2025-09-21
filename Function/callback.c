#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int div(int a, int b) { return a / b; }

void printSomething(char *name, int (*fp)(int, int)) {
    printf(name);
    printf("\n%d", fp(10, 3));
}

void main() {
    int (*fp) (int, int) = add;
    printSomething("Bangladesh", fp);

}