#include<stdio.h>
void main() {
    int a = 7, b = 18;
    int min = a < b ? a : b;
    for(int gcd=min; ;gcd--) {
        if(a%gcd == 0 && b%gcd == 0) {
            printf("GCD = %d\n", gcd);
            break;
        } 
    }
    // int lcm = (a*b) / gcd;
    // printf("LCM = %d\n", lcm);
}