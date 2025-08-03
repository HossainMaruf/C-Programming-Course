#include <stdio.h>
void main() {
    printf("This is a number %d\n"); // %d = Decimal Integer
    printf("This is a number %f\n"); // %f = Floating Point
    printf("This is a number %lf\n"); // %lf = Long Floating Point

    // SOME COMMON MISTAKES
    // printf("This is a number %d\n", 10); // This will works fine
    // printf("This is a number %d\n", 10.5); // This will print 0 
    // printf("This is a number %f\n", 10.5); // This will print 10.500000 (Default 6 digits after decimal point)
    // printf("This is a number %f\n", 10); // This will print 0.000000 (Default 6 digits after decimal point)
    // printf("This is a number %lf\n", 10.5); // This will print 10.500000 (Default 6 digits after decimal point)
    // printf("This is a number %lf\n", 10); // This will print 0.000000 (Default 6 digits after decimal point)

    // MULTIPLE FORMAT SPECIFER
    // printf("This is %d and this is %f\n", 10, 15.5);
    // printf("The sum of %d and %d = %d", 10, 5, 15);
    // printf("The sum of %d and %d = %d", 10, 5); // Mismatch List

    // DIGITS AFTER DECIMAL POINT
    // printf("This is a formated number %.5d\n", 10);
    // printf("This is a formated number %.3f\n", 10.5);
    // printf("This is a formated number %.3lf\n", 20.5);
}