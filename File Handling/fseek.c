#include <stdio.h>
void main() {

    FILE *file = NULL;
    file = fopen("record.txt", "r");
    if (file == NULL) printf("File is not opened\n");
    else printf("File is opened\n");

    putchar(fgetc(file));
    putchar(fgetc(file));
    putchar(fgetc(file));

    fseek(file, -3L, SEEK_END);

    putchar(fgetc(file));
    fclose(file);
}