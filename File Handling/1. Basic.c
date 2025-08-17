#include <stdio.h>
void main() {
    FILE *file = NULL;
    file = fopen("record.txt", "r");
    if(file == NULL) printf("File is not opened\n");
    else {
        putchar(fgetc(file));
        putchar(fgetc(file));
        putchar(fgetc(file));
        putchar(fgetc(file));
        putchar(fgetc(file));
        putchar(fgetc(file));
    }
    fclose(file);
}