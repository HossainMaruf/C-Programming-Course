#include <stdio.h>
void main() {
    FILE *file = NULL;
    file = fopen("record.txt", "w");
    if(file == NULL) printf("File is not opened!\n");
    else printf("File is opened!\n");

    fputs("I am Maruf\tHossain\nFrom Dhaka", file);

    fclose(file);
}