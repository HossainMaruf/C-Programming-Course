#include <stdio.h>
void main() {
    int a = 2000, b = 200;
    if(a > b) {
        printf("%d is smaller than %d", b, a);
    } else if( b > a) {
        printf("%d is smaller than %d", a, b);
    } 
    else {
        printf("%d is equal to %d", a, b);
    }
} 