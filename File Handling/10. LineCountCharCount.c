#include <stdio.h>
void main() {
    FILE *file = NULL;
    file = fopen("record.txt", "r");
    if(file == NULL) printf("File is not opened\n");
    else printf("File is opened\n");

    int lineCount = 0, charCounter = 0;
    char ch;
    while((ch = fgetc(file)) != EOF) {
        if(ch == '\n') {
            lineCount++;
            printf("Lines = %d chars = %d\n", lineCount, charCounter);
            charCounter=0;
        }
        else charCounter++;
    }

    printf("Lines = %d chars = %d\n", lineCount+1, charCounter);


    fclose(file);
}