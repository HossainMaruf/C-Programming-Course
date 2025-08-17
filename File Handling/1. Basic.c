#include <stdio.h>
void main() {
    FILE *file = NULL;
    file = fopen("record.txt", "r");
    if(file == NULL) printf("File is not opened\n");
    else {
        char ch;
        while((ch = fgetc(file)) != -1) {
            putchar(ch);
        }
    }
    fclose(file);
}