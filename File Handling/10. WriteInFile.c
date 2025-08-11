#include <stdio.h>
void main() {
    FILE *file = NULL;
    file = fopen("record.txt", "w");
    if(file == NULL) printf("File is not opened!\n");
    else printf("File is opened!\n");

    /**
     * fgetc()
     * fgets()
     * rewind()
     * fseek()
     * ftell()
     */

     fputc('a', file);
     fputc('a', file);
     rewind(file);
     fputc('m', file);
     fseek(file, 0L, SEEK_END);
     fputc('n', file);

    fclose(file);
}