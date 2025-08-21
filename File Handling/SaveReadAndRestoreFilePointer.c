#include <stdio.h>
void main() {
    FILE *file = NULL;
    file = fopen("record.txt", "r");
    if(file == NULL) printf("File is not opened!\n");
    else printf("File is opened!\n");

    long saved = ftell(file);
    char buffer[10];
    fgets(buffer, sizeof(buffer), file); // first time reading
    puts(buffer); // print the result

    fseek(file, saved, SEEK_SET);

    fgets(buffer, sizeof(buffer), file); // second time reading
    puts(buffer);


    fclose(file);
}