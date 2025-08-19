#include <stdio.h>
void main() {

    FILE *file = NULL;
    file = fopen("record.txt", "r");
    if (file == NULL) printf("File is not opened\n");
    else printf("File is opened\n");

    char ch;
    while((ch = fgetc(file)) != EOF) {
        // putchar(ch);
        printf("\n%d = Position = %ld\n",ch, ftell(file));
    }

    fclose(file);
}