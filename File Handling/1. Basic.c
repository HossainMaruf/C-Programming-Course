#include <stdio.h>
void main() {
    FILE *file = NULL;
    file = fopen("record.txt", "r");
    if(file == NULL) printf("File is not opened\n");
    else {
        char ch;
        while((ch = fgetc(file)) != -1) {
            printf("Pos = %ld = %c\n", ftell(file)-1, ch);
        }
        // putchar(fgetc(file));
        // putchar(fgetc(file));
        // putchar(fgetc(file));
        // rewind(file); // resetting the file pointer
        // putchar(fgetc(file));
        // putchar(fgetc(file));
        // long value = ftell(file);
        // printf("%ld\n", value);

        // fgetc(file);

        // value = ftell(file);
        // printf("%ld\n", value);

        // fgetc(file);
        // value = ftell(file);
        // printf("%ld\n", value);

    }
    fclose(file);
}