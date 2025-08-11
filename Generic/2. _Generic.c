#include <stdio.h>

#define typename(x) _Generic((x),\
    int: "Integer",\
    float: "Floating Point",\
    double: "Double",\
    char*: "String Literal",\
    default: "Other")


void main() {
    printf(typename(10));   // int
    printf("\n");
    printf(typename(10.5f)); // float   
    printf("\n");
    printf(typename(10.5));  // double 
    printf("\n");
    printf(typename("maruf"));  // char* 
    printf("\n");
}