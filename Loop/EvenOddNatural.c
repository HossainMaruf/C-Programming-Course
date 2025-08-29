#include <stdio.h>
void main() {
   int n;
   printf("Enter n: ");
   scanf("%d", &n);
   for(int i=n; i>=1; i-=2) {
    printf("%d ", i);
   } 
}