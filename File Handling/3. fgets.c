#include <stdio.h>
void main() {
    FILE *file = NULL;
    file = fopen("record.txt", "r");
    if(file == NULL) printf("File is not opened\n");
    else {
        char line[15];
        printf(fgets(line, sizeof(line), file));
        printf(fgets(line, sizeof(line), file));
        printf(fgets(line, sizeof(line), file));
    }
    fclose(file);
}