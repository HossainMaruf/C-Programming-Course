#include <stdio.h>
#define WIN_EXTRA_CHARS 2

int calculateLength(FILE *file) {
    int count = 0;
    while(fgetc(file) != '\n') count++;
    return count + WIN_EXTRA_CHARS;
}

void printLine(int lineNumber, FILE *file) {
    int length = calculateLength(file);
    fseek(file, (lineNumber-1)*length, SEEK_SET); 
    char buffer[length];
    fgets(buffer, sizeof(buffer), file);
    printf(buffer);
}

void main() {
    FILE *file = NULL;
    file = fopen("record.txt", "r");
    if(file == NULL) printf("File is not opened!\n");
    else printf("File is opened!\n");

    printLine(1, file);

    fclose(file);
}