#include <stdio.h>
void main() {
    printf("char size = %d\n", sizeof(char));
    printf("int size = %d\n", sizeof(int));
    printf("float size = %d\n", sizeof(float));
    printf("double size = %d\n", sizeof(double));

    char ch;
    int a;
    float b;
    double c;
    printf("char size = %d\n", sizeof(ch));
    printf("int size = %d\n", sizeof(a));
    printf("float size = %d\n", sizeof(b));
    printf("double size = %d\n", sizeof(c));

    printf("char size = %d\n", sizeof((char)'a'));
    printf("int size = %d\n", sizeof(10));
    printf("float size = %d\n", sizeof(10.4F));
    printf("double size = %d\n", sizeof(10.4));
}