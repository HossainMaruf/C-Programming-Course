#include <stdio.h>
void main() {
    int a = 10, b = 14;
    int min = b < a ? b : a;
    int gcd;
    for(gcd=min; ; gcd--) {
        if(a%gcd == 0 && b%gcd == 0) {
            break;
        }
    }
    printf("GCD = %d\n", gcd);
    printf("LCM = %d", (a*b)/gcd);
}