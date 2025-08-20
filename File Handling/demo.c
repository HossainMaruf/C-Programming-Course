#include <stdio.h>
void main() {
    char text[] = "Md. Maruf Hossain 10101 20.3";
    char name[39];
    int id;
    float marks;
    sscanf(text, "%[^0-9]%d%f", name, &id, &marks);
    printf("%s\n", name);
    printf("%d\n", id);
    printf("%f\n", marks);
}