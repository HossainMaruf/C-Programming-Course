#include <stdio.h>
void main() {
    char name[] = "Maruf Hossain"; 
    /** but when you initialize using "" without array size then there is default \0 at the end
    */
    printf("%c", name[0]);
    printf("%c", name[1]);
    printf("%c", name[2]);
    printf("%c", name[3]);
    printf("%c", name[4]);

    printf("\n%s", name);
    name[0] = 'F';
    name[4] = 'K';
    printf("\n%s", name);
}