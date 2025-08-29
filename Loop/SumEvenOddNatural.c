#include <stdio.h>
void main() {
   int n, sum = 0;
   printf("Enter n: ");
   scanf("%d", &n);
   for(int i=1; i<=n; i+=2) {
        sum = sum + i;
   } 
   printf("Sum = %d\n", sum);
}