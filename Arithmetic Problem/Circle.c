#include <stdio.h>
void main() {
    const float PI = 3.1416;
    float radius, diameter, circum, area;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    diameter = 2 * radius;
    circum = 2 * PI * radius;
    area = PI * radius * radius;
    printf("Diameter = %.3f\n", diameter);
    printf("Circumference = %.3f\n", circum);
    printf("Area = %.3f\n", area);
}