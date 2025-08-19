#include <stdio.h>
#define WIN_EXTRA_CHARS 2

void main() {
    FILE *file = NULL;
    file = fopen("record.txt", "r");
    if(file == NULL) printf("File is not opened\n");
    else {
        fgetc(file);
        fgetc(file);
        fgetc(file);
        long saved = ftell(file);
        putchar(fgetc(file));
        putchar(fgetc(file));
        putchar(fgetc(file));
        fseek(file, saved ,SEEK_SET);
        putchar(fgetc(file));
        putchar(fgetc(file));
        putchar(fgetc(file));
    }
    fclose(file);
}