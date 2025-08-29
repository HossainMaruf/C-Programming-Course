#include <stdio.h>
void main() {
    const float PI = 3.1416;
    float radius, diameter, area, volume;
    printf("Enter radius of sphere: ");
    scanf("%f", &radius);
    diameter = 2 * radius;
    area = 4 * PI * radius * radius;
    volume = (4.0/3.0)*PI * radius * radius * radius;
    printf("Diameter = %.3f\n", diameter);
    printf("Area = %.3f\n", area);
    printf("Volume = %.3f\n", volume);
}