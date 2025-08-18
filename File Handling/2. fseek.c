#include <stdio.h>
void main() {
    FILE *file = NULL;
    file = fopen("1. Basic.c", "r");
    if(file == NULL) printf("File is not opened\n");
    else {
        fseek(file, 0L, SEEK_END);
        long pos = ftell(file);
        printf("Size in bytes = %ld\n",  pos);
    }
    fclose(file);
}