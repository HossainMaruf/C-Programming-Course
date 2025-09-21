#include <stdio.h>
void main() {
    float marks;
    printf("Enter marks: ");
    scanf("%f", &marks);
    if(marks >= 80) printf("A+ = 5.00");
    else if(marks >= 70 && marks <= 79) printf("A = 4.50");
    else if(marks >= 60 && marks <= 69) printf("A- = 4.00");
    else if(marks >= 50 && marks <= 59) printf("B = 3.50");
    else if(marks >= 40 && marks <= 49) printf("C = 3.00");
    else if(marks >= 33 && marks <= 39) printf("D = 2.50");
    else printf("F = 0.00");
}