#include <stdio.h>
void main() {
    char name[] = {'M', 'A', 'R', 'U', 'F', ' ', 'H', 'O', 'S', 'S', 'A', 'I', 'N'};
    /**
     * if size is written then fill up the array using \0 but 
     * if you don't mention the array size then there is no \0 in the array
     */
    printf("%c", name[0]);
    printf("%c", name[1]);
    printf("%c", name[2]);
    printf("%c", name[3]);
    printf("%c", name[4]);

    printf("\n%s", name);
}