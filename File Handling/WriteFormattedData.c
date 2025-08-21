#include <stdio.h>
void main() {
    FILE *file = NULL;
    file = fopen("record.txt", "w");
    if(file == NULL) printf("File is not opened!\n");
    else printf("File is opened!\n");

    fprintf(file, "%d %f %s\n", 10, 11.3, "Maruf Hossain");
    fprintf(file, "%d %f %s\n", 10, 11.3, "Hossain Maruf");

    fclose(file);
}