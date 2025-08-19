#include <stdio.h>
#include <stdlib.h>

#define WIN_EXTRA_CHARS 2

int* getFileInfo(FILE *file) {
    int size = 100;
    int *info = (int*)malloc(size * sizeof(int));
    /** TODO: If buffer overflows */
    for(int i=0; i<size; i++) { info[i] = -1; }

    char ch;
    int index = 0;
    int count = 0;
    while((ch = fgetc(file)) != EOF) {
        if(ch == '\n') { info[index++] = count + WIN_EXTRA_CHARS; count=0; }
        else count++;

    }

    info[index] = count + WIN_EXTRA_CHARS;

    return info;
}

void printLine(int lineNumber, int *info, FILE *file) {
    /** TODO: lineNumber exceds */
    int sum = 0;
    for(int i=0; i<lineNumber-1; i++) { sum += info[i]; }
    fseek(file, sum, SEEK_SET);
    char buffer[info[lineNumber-1]];
    fgets(buffer, sizeof(buffer), file);
    printf(buffer);
}

void main() {
    FILE *file = NULL;
    file = fopen("record.txt", "r");
    if(file == NULL) printf("File is not opened!\n");
    else printf("File is opened!\n");

    int line = 6, count_newline = 0, letter_count = 0;
    while(count_newline != (line-1)) { if(fgetc(file) == '\n') count_newline++; }
    long saved = ftell(file);
    while(fgetc(file) != '\n') letter_count++;
    fseek(file, saved, SEEK_SET);
    char buffer[letter_count+2];
    printf(fgets(buffer, sizeof(buffer), file));


    fclose(file);
}