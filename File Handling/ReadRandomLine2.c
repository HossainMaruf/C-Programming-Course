#include <stdio.h>
#define WIN_EXTRA_CHARS 2

void printLine(int line, FILE *file) {
    rewind(file);
    int count_newline = 0, letter_count = 0;
    while(count_newline != (line-1)) {
        if(fgetc(file) == '\n') count_newline++;
    }
    long saved = ftell(file);
    char ch;
    while(ch = fgetc(file)) {
        if(ch == '\n' || ch == EOF) break;
        else letter_count++;
    }
    char buffer[letter_count+WIN_EXTRA_CHARS];
    fseek(file, saved, SEEK_SET);
    printf(fgets(buffer, sizeof(buffer), file));
}

void main() {
    FILE *file = NULL;
    file = fopen("record.txt", "r");
    if(file == NULL) printf("File is not opened\n");
    else {
        printLine(4, file);
        printLine(5, file);
    }
    fclose(file);
}
