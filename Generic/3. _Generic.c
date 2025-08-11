#include <stdio.h>

typedef enum
{
    INT,
    FLOAT,
    DOUBLE,
    CHAR,
    STRING
} Type;

void print_int(int x) { printf("Integer = %d\n", x); };
void print_float(float x) { printf("Float = %f\n", x); };
void print_double(double x) { printf("Double = %lf\n", x); };
void print_char(char x) { printf("Char = %c\n", x); };
void print_strLiteral(char *x) { printf("String Literal = %s\n", x); };

#define print(x) _Generic((x), \
    char: "char",              \
    int: "int",                \
    float: "float",            \
    double: "double",          \
    char *: "string literal",  \
    default: "default")
// call the function at runtime

void main()
{
    puts(print('M'));       // char will be promoted to int and will pass as int
    puts(print((char)'M')); // not promoted to anything, it's a char
    puts(print(20.5));
    puts(print(20.5f));
    puts(print("Maruf"));
}