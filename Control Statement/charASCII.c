#include <stdio.h>
void main() {
    /**
     * 0 - 9 = 48 - 57
     * A - Z = 65 - 90
     * a - z = 97 - 122
     * SPACE = 32
     * ? = 63
     */
    char ch = '?';
    // char chh = '??' // ERROR
    printf("%c = %d\n", ch, ch);
    ch = '$';
    printf("%c = %d\n", ch, ch);
    ch = '@';
    printf("%c = %d\n", ch, ch);
}