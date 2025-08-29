#include <stdio.h>
void main() {
    int n, fact = 1;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        fact = fact*i;
    }

    printf("Factorial = %d\n", fact);
}