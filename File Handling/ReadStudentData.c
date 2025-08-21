#include <stdio.h>
#include <string.h>
void main() {
    FILE *file = NULL;
    file = fopen("record.txt", "r");
    if(file == NULL) printf("File is not opened\n");
    else printf("File is opened\n");

    int serial, id;
    double result;
    char name[32];

    // Name is the last
    // while(fscanf(file, "%d%d%lf%[a-z A-Z.]", &serial, &id, &result, name) != EOF) {
    //     fgetc(file);
    //     printf("%d\t%d\t%.3lf\t%s\n", serial, id, result, name);
    // }

    // Name in the beginning
    // while(fscanf(file, "%[^0-9]%d%d%lf", name, &serial, &id, &result) != EOF) {
    //     fgetc(file);
    //     printf("%s\t%d\t%d\t%.3lf\n", name, serial, id, result);
    // }

    // // Name is the middle
    while(fscanf(file, "%d%[^0-9]%d%lf", &serial, name, &id, &result) != EOF) {
        printf("%d\t%s\t%d\t%.3lf\n", serial, name, id, result);
    }

    fclose(file);
}