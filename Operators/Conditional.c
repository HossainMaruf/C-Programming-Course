#include <stdio.h>
void main() {
    // int v = 5 > 6 ? 10 : 20;

    // int a = 10, b = 20;
    // int max = a > b ? a : b;
    // int min = a < b ? a : b;
    // printf("Max = %d\n", max);
    // printf("Min = %d\n", min);

    int a = 10, b = 20, c = 30;
    // int max = a > b ? a > c ? a : c : b > c ? b : c;
    int max = a > b && a > c ? a : b>a && b >c ? b : c;
    printf("Max = %d", max);
}