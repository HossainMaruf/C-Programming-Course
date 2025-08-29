#include <stdio.h>
void main() {
    printf("%d\n", 3 < 5); // 1
    printf("%d\n", 6 > 5); // 1
    printf("%d\n", 7 <= 5); // 0
    printf("%d\n", 4 >= 5); // 0
    printf("%d\n", 10 != 5); // 1
    printf("%d\n", 10 != 10); // 0
    printf("%d\n", 3 == 5); // 0
}