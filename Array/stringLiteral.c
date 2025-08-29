#include <stdio.h>
void main() {
    char *name = "Maruf Hossain"; // string literal (read only area)
    printf("%c", name[0]);
    printf("%c", name[1]);
    printf("%c", name[2]);
    printf("%c", name[3]);
    printf("%c", name[4]);
    // name[0] = 'F'; // error
    // name[4] = 'K'; // error

    printf("\n%s", name);
}