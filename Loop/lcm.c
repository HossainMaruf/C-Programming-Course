#include <stdio.h>
void main() {
    int a = 3, b = 12;
    int max = a > b ? a : b;
    int lcm;
    for(lcm=max; ; lcm=lcm+max) {
        if(lcm%a == 0 && lcm%b == 0) {
            break;
        }
    }
    printf("LCM = %d\n", lcm);
    printf("GCD = %d", (a*b)/lcm);
}