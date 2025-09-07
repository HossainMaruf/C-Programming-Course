#include <stdio.h>
void main() {
    // printf("%d\n", 0 && 0); // 0
    // printf("%d\n", 0 && 1); // 0
    // printf("%d\n", 1 && 0); // 0
    // printf("%d\n", 1 && 1); // 1
    // printf("%d\n", 0 && 0 && 0); // 0
    // printf("%d\n", 0 && 0 && 1); // 0
    // printf("%d\n", 0 && 1 && 1); // 0
    // printf("%d\n", 1 && 1 && 1); // 1

    // printf("%d\n", 0 || 0); // 0
    // printf("%d\n", 0 || 1); // 1
    // printf("%d\n", 1 || 0); // 1
    // printf("%d\n", 1 || 1); // 1
    // printf("%d\n", 0 || 0 || 0); // 0
    // printf("%d\n", 0 || 0 || 1); // 1
    // printf("%d\n", 0 || 1 || 1); // 1
    // printf("%d\n", 1 || 1 || 1); // 1
    
    /**
     * Truthy, Falsy
     * 0, [], {}, ()
     * 1, [1], {2}, (10)
     * True = 1
     * False = 0
     */
    // printf("%d\n", 5 || 6); // 1
    // printf("%d\n", -1 || -1); // 1
    // printf("%d\n", -1 || 0); // 1
    // printf("%d\n", 6 && 0); // 0

    printf("%d\n", !3); // 0
    printf("%d\n", !-1); // 0
    printf("%d\n", !0); // 1
}