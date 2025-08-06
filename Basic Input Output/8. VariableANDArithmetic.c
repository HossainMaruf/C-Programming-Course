#include <stdio.h>
void main() {
    // int a = 13, b = 4;
    // int sum = a + b;
    // int minus = a - b;
    // int multiplication = a * b;
    // int quotient = a / b;
    // int remainder = a % b;
    // printf("Sum = %d\n", sum);
    // printf("Minus = %d\n", minus);
    // printf("Multi = %d\n", multiplication);
    // printf("Quotient = %d\n", quotient);
    // printf("Remainder = %d\n", remainder);
    double marks = 10.5, cgpa = 3.85;
    double sum = marks + cgpa, minus = marks-cgpa, multiplication = marks*cgpa, division = marks / cgpa;

    printf("%.3lf\n", sum);
    printf("%.3lf\n", minus);
    printf("%.3lf\n", multiplication);
    printf("%.3lf\n", division);
}