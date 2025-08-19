#include <stdio.h>
#define WIN_EXTRA_CHARS 2

int lineLength(FILE *file) {
    int count=0;
    while(fgetc(file) != '\n') count++;
    return count;
}
void printLine(FILE *file, int lineNumber) {
    int n = lineLength(file);
    char buffer[n+WIN_EXTRA_CHARS];
    fseek(file, (lineNumber-1)*(n+WIN_EXTRA_CHARS),SEEK_SET);
    printf(fgets(buffer, sizeof(buffer), file));
}

void main() {
    FILE *file = NULL;
    file = fopen("record.txt", "r");
    if(file == NULL) printf("File is not opened\n");
    else {
        printLine(file, 2);
        printLine(file, 3);
    }
    fclose(file);
}