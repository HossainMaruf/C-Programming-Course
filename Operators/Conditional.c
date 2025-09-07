#include <stdio.h>
void main() {
    int a = 10, b = 20;
    int max = a > b ? a : b;
    int min = a < b ? a : b;
    
    int d = 10, e = 20, f = 30;
    // max = d > e ? d > f ? d : e > f ? e : f;
    max = (d > e) ? (d > f) ? d : f : (e > f) ? e : f;
    printf("Max = %d\n", max);
}