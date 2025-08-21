#include <stdio.h>
void main() {

    FILE *file = NULL;
    file = fopen("record.txt", "r");
    if (file == NULL) printf("File is not opened\n");
    else printf("File is opened\n");

    fseek(file, 0L, SEEK_END);
    long int pos = ftell(file);
    printf("File Size = %d Bytes\n", pos);

    fclose(file);
}