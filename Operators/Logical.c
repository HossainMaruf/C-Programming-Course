#include <stdio.h>
void main() {
    printf("%d\n", 0 && 0); // 0
    printf("%d\n", 0 && 1); // 0
    printf("%d\n", 1 && 0); // 0
    printf("%d\n", 1 && 1); // 1
    printf("%d\n", 0 && 0 && 0); // 0
    printf("%d\n", 0 && 0 && 1); // 0
    printf("%d\n", 0 && 1 && 1); // 0
    printf("%d\n", 1 && 1 && 1); // 1

    printf("%d\n", 0 || 0); // 0
    printf("%d\n", 0 || 1); // 1
    printf("%d\n", 1 || 0); // 1
    printf("%d\n", 1 || 1); // 1
    printf("%d\n", 0 || 0 || 0); // 0
    printf("%d\n", 0 || 0 || 1); // 1
    printf("%d\n", 0 || 1 || 1); // 1
    printf("%d\n", 1 || 1 || 1); // 1

    printf("%d\n", 5 && 6); // 1
    printf("%d\n", 5 && 0); // 0
    printf("%d\n", 5 && 0); // 0
    printf("%d\n", 6 && 10); // 1
    printf("%d\n", 5 && 1 && 0); // 0
    printf("%d\n", 0 && 1 && 1); // 0
    printf("%d\n", 5 && 1 && 1); // 1

    printf("%d\n", !0); // 1
    printf("%d\n", !1); // 0
    printf("%d\n", !5); // 0
}