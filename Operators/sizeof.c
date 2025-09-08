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

    printf("char variable = %d\n", sizeof ch);
    printf("int variable  = %d\n", sizeof a);
    printf("float variable = %d\n", sizeof b);
    printf("double variable = %d\n", sizeof c);
    printf("double variable = %d\n", sizeof(a));
}