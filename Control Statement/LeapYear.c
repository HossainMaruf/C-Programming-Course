#include <stdio.h>
void main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    if((year % 400 == 0) || (year%4==0 && year%100!=0)) {
        printf("%d = Leap Year", year);
    } else {
        printf("%d = Not Leap Year", year);
    }
}