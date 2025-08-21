#include <stdio.h>
#include <string.h>
void main() {
    FILE *file = NULL;
    file = fopen("record.txt", "r");
    if(file == NULL) printf("File is not opened\n");
    else printf("File is opened\n");

    int serial, id;
    double result;

    while(fscanf(file, "%d%d%lf", &serial, &id, &result) != EOF) {
        printf("%d\t%d\t%.3lf\n", serial, id, result);
    }

    fclose(file);
}