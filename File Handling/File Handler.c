#include <stdio.h>
#include <string.h>

typedef struct {
    char name[32];
    char mode[8];
    FILE *file;
} FileHandler;

void initializeFileHandler(FileHandler*, char*, char*);
int OpenFile(FileHandler*);
int CloseFile(FileHandler*);
void printID(FileHandler*);

void main() {
    FileHandler fileHandler;
    initializeFileHandler(&fileHandler, "record.txt", "r");
    OpenFile(&fileHandler);
    printID(&fileHandler); 
    CloseFile(&fileHandler);
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
}