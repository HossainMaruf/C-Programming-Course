#include <stdio.h>

void main() {
    char* result = _Generic(10, int: "Integer", float: "Floating Point", double: "Double", char*: "String Literal", default: "Other");
    printf(result);  // int
    printf("\n");
    result = _Generic(10.5f, int: "Integer", float: "Floating Point", double: "Double", char*: "String Literal", default: "Other");
    printf(result);  // float   
    printf("\n");
    result = _Generic(10.5, int: "Integer", float: "Floating Point", double: "Double", char*: "String Literal", default: "Other");
    printf(result);  // double 
    printf("\n");
    result = _Generic("Maruf", int: "Integer", float: "Floating Point", double: "Double", char*: "String Literal", default: "Other");
    printf(result);  // char* 
    printf("\n");
}