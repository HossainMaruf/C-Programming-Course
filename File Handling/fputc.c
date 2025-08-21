#include <stdio.h>
void main() {

    FILE *file = NULL;
    file = fopen("record.txt", "w");
    if (file == NULL) printf("File is not opened\n");
    else printf("File is opened\n");

    printf("Pos = %ld\n", ftell(file));
    fputc('a', file);
    printf("Pos = %ld\n", ftell(file));
    fputc('b', file);
    printf("Pos = %ld\n", ftell(file));
    fputc('c', file);
    printf("Pos = %ld\n", ftell(file));
    fputc('d', file);
    printf("Pos = %ld\n", ftell(file));

    fclose(file);
}