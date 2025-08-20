#include <stdio.h>
#include <string.h>
void main() {
    FILE *file = NULL;
    file = fopen("record.txt", "r");
    if(file == NULL) printf("File is not opened\n");
    else printf("File is opened\n");

    int serial, id;
    double result;
    char buffer[256];
    char name[32];

    while(fgets(buffer, sizeof(buffer), file)) {
        sscanf(buffer, "%d%d%lf%[^\n]", &serial, &id, &result, name);
        printf("%d\t%s\t%d\t%.3lf\n", serial, name, id, result);
    }

    fclose(file);
}