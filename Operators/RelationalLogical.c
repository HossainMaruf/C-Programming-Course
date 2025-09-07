#include <stdio.h>
void main() {
//    printf("%d\n", 5 < 6 && 6 > 10); // 0 
//    printf("%d\n", 5 >= 6 && 6 == 10); // 0 
//    printf("%d\n", 5 != 6 && 6 < 10); // 1 
//    printf("%d\n", 5 >= 6 && 6 > 10); // 0 

//    printf("%d\n", 5 < 6 || 6 > 10); // 1 
//    printf("%d\n", 5 >= 6 || 6 == 10); // 0 
//    printf("%d\n", 5 != 6 || 6 < 10); // 1 
//    printf("%d\n", 5 >= 6 || 6 > 10); // 0 

   printf("%d\n", !-1 || !0); // 1 
   printf("%d\n", !0 || !10); // 1 
   printf("%d\n", !0 || !0); // 1 
   printf("%d\n", !0 && !0); // 1 
   /**
    * Precedence = Which operator execute first
    * Associativity = Parse left to right or right to left when precedence is same
    * 3 + 5 - 6
    */

}