#include <stdio.h>
void main() {
    char name[10];
    name[0] = 'M';
    name[1] = 'A';
    name[2] = 'R';
    name[3] = 'U';
    name[4] = 'F';

    printf("%c", name[0]);
    printf("%c", name[1]);
    printf("%c", name[2]);
    printf("%c", name[3]);
    printf("%c", name[4]);

    printf("\n%s\n", name);
    printf("%d\n", name[5] == '\0');
    printf("%d\n", name[6] == '\0');
    printf("%d\n", name[7] == '\0');
    printf("%d\n", name[8] == '\0');
    printf("%d\n", name[9] == '\0');
    // so rest of the variables are set to \0 default
}