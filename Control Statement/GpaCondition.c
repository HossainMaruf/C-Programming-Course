#include <stdio.h>
void main() {
    float marks = 34.5;
    if(marks >= 80) printf("A+ = 5.00");
    else if(marks >=70 && marks < 80) printf("A = 4.50");
    else if(marks >=60 && marks < 70) printf("A- = 4.00");
    else if(marks >=50 && marks < 60) printf("B = 3.50");
    else if(marks >=40 && marks < 50) printf("C = 3.00");
    else if(marks >=33 && marks < 39) printf("D = 3.00");
    else printf("F = 0.00");
}