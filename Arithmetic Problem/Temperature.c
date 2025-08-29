#include <stdio.h>
void main() {
    float cel, fah;
    printf("Enter fahrenheit: ");
    scanf("%f", &fah);
    cel = (fah - 32) / 1.8;
    printf("Celsius = %.3f\n", cel);
}