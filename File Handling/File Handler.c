#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[32];
    char mode[8];
    FILE *file;
    char *format;
    int WIN_EXTRA_CHARS;
    int bufferSize;
    char *buffer;
} FileHandler;

void initializeFileHandler(FileHandler*, char*, char*);
int OpenFile(FileHandler*);
int CloseFile(FileHandler*);
void printID(FileHandler*);
char* readLine(int, FileHandler*);
int getLineCount(FileHandler*);

void main() {
    FileHandler fileHandler;
    initializeFileHandler(&fileHandler, "record.txt", "r");
    OpenFile(&fileHandler);
    // printID(&fileHandler); 
    CloseFile(&fileHandler);
}

int getLineCount(FileHandler* fileHandler) {
    rewind(fileHandler->file);
    int count = 0;
    char ch;
    while((ch = fgetc(fileHandler->file)) != EOF) {
        if(ch == '\n') count++;
    }
    return count + 1; // +1 for the last line if it doesn't end with a newline
}
char* readLine(int line, FileHandler* fileHandler) {
    int lineCount = getLineCount(fileHandler);
    if(line < 1 || line > lineCount) {
        printf("Line number must be 1 to %d \n", lineCount);
        return NULL;
    }
    rewind(fileHandler->file);;
    int count_newline = 0, letter_count = 0;
    while(count_newline != (line-1)) {
        if(fgetc(fileHandler->file) == '\n') count_newline++;
    }
    long saved = ftell(fileHandler->file);
    char ch;
    while(ch = fgetc(fileHandler->file)) {
        if(ch == '\n' || ch == EOF) break;
        else letter_count++;
    }
    free(fileHandler->buffer); // free previously allocated memory
    fileHandler->bufferSize = letter_count + 1; // +1 for null terminator
    fileHandler->buffer = (char*)malloc(fileHandler->bufferSize * sizeof(char));
    fseek(fileHandler->file, saved, SEEK_SET);
    return fgets(fileHandler->buffer, fileHandler->bufferSize, fileHandler->file);
}

void printID(FileHandler* fileHandler) {
    rewind(fileHandler->file);
    int id;
    while(fscanf(fileHandler->file, "%d", &id) != EOF) {
        printf("%d\n", id);
        while(fgetc(fileHandler->file) != '\n');
    }
}

int OpenFile(FileHandler* fileHandler) {
    fileHandler->file = fopen(fileHandler->name, fileHandler->mode);
    if(fileHandler->file == NULL) {
        printf("File %s is not opened in %s mode\n", fileHandler->name, fileHandler->mode);
        return EOF; // unsuccessful
    } else {
        printf("File %s is opened in %s mode\n", fileHandler->name, fileHandler->mode);
        return 0; // successful
    }
}

int CloseFile(FileHandler* fileHandler) {
    free(fileHandler->buffer); // free previously allocated memory
    if(fclose(fileHandler->file) == EOF) {
        printf("Error to close %s file.\n", fileHandler->name);
        return EOF; // unsuccessful
    } else {
        printf("File %s is closed successfully\n", fileHandler->name);
        return 0; // successful
    }
}

void initializeFileHandler(FileHandler* fileHandler, char* name, char* mode) {
    strcpy(fileHandler->name, name);
    strcpy(fileHandler->mode, mode);
    fileHandler->file = NULL;
    fileHandler->WIN_EXTRA_CHARS = 2;
    fileHandler->buffer = NULL;
    fileHandler->format = "%d%f%[^\n]";
}