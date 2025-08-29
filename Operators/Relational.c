#include <stdio.h>
void main() {
    printf("%d\n", 3 < 5); // 1
    printf("%d\n", 6 < 5); // 0
    printf("%d\n", 6 > 5); // 1
    printf("%d\n", 4 >= 5); // 0
    printf("%d\n", 6 <= 5); // 0
    printf("%d\n", 6 == 5); // 0
    printf("%d\n", 6 == 6); // 1
    printf("%d\n", 6 != 5); // 1
    printf("%d\n", 6 != 6); // 0
}