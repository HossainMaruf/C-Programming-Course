#include <stdio.h>

void main() {
    FILE *file = NULL;
    file = fopen("record.txt", "r");
    if(file == NULL) printf("File is not opened\n");
    else {
        int roll;
        float marks;
        char name[32];
        char buffer[128];
       while(fgets(buffer, sizeof(buffer), file)) {
            sscanf(buffer, "%d%[^0-9]%f", &roll, name, &marks);
            printf("%d\t%s\t%.3f\n", roll, name, marks);
       } 
    }
    fclose(file);
}
