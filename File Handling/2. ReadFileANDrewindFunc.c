#include <stdio.h>
void main() {

    FILE *file = NULL;
    file = fopen("record.txt", "r");
    if (file == NULL) printf("File is not opened\n");
    else printf("File is opened\n");

    char ch;
    while((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // putchar(fgetc(file));
    // putchar(fgetc(file));
    // putchar(fgetc(file));
    // putchar(fgetc(file));

    // rewind(file); // reset the file pointer

    // putchar(fgetc(file));
    // putchar(fgetc(file));
    // putchar(fgetc(file));
    // putchar(fgetc(file));

    fclose(file);
}