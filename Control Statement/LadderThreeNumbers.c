#include <stdio.h>
void main() {
    int a = 10, b = -20, c = -30;
    if(a < b && a < c) {
        printf("%d is smallest", a);
    }
    else if(b < a && b < c) {
        printf("%d is smallest", b);
    } else {
        printf("%d is smallest", c);
    }
} 