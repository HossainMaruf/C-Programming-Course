#include<stdio.h>
void main() {
    int a = 6, b = 18;
    int max = a > b ? a : b;
    for(int lcm=max; ;lcm+=max) {
        if(lcm%a == 0 && lcm%b == 0) {
            printf("LCM = %d\n", lcm);
            break;
        } 
    }
}