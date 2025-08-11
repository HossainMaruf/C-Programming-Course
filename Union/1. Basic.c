#include <stdio.h>
#include <string.h>

typedef union {
    int i;
    float f;
    double d;
    char name[10];
} Tag;

void main() {
    Tag t;
    /** Default values are garbage */
    // printf("%d\n", t.i);
    // printf("%f\n", t.f);
    // printf("%lf\n", t.d);
    // printf("%s\n", t.name);

    /** Assign value */

    t.i = 10;
    printf("After setting int = %d\n", t.i);

    t.i = 20;
    t.f = 20.4f;
    printf("After changing int = %d\n", t.i);
    printf("After Setting float = %f\n", t.f);

    t.i = 30;
    t.f = 40.4f;
    t.d = 10;
    printf("After changing int = %d\n", t.i);
    printf("After changing float = %f\n", t.f);
    printf("After setting double = %lf\n", t.d);
}