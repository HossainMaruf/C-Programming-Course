#include <stdio.h>
void main() {
    int x; // declaration of data variable
    x = 10; // initialization of data variable
    int *p; // declaration of address variable
    p = &x; // initialization of address variable
    printf("x = %d\n", x); // 10
    printf("&x = %d\n", &x); // 100
    printf("p = %d\n", p); // 100
    printf("&p = %d\n", &p); // 1000
    printf("Dereferencing *p = %d\n", *p); // 10
}