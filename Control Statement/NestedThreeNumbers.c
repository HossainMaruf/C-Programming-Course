#include <stdio.h>
void main() {
    int a = 10, b = 20, c = 30;
    if(a > b) {
        // a is greather than b
        if(a > c) {
            printf("a is greatest");
        } else {
            printf("c is greatest");
        }
    } else {
        // a is not greater than b
        if(b > c) {
            printf("b is greatest");
        } else {
            printf("c is greatest");
        }
    }
} 