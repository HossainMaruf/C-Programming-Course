#include <stdio.h>
#include <string.h>

struct School {
    char name[32];
    long long int EIIN;
    int shift;
};

void displayInfo(struct School s) { // it's getting the copy of main data
    printf("Name: %s\n", s.name);
    printf("EIIN: %lld\n", s.EIIN);
    printf("Shift: %d\n", s.shift);
}

void displayData(struct School *s) { // it's getting the address of main data
    printf("Name: %s\n", s->name);
    printf("EIIN: %lld\n", s->EIIN);
    printf("Shift: %d\n", s->shift);
}

void main() {
    struct School s1 = {"Khalishpur Secondary School", 1023432, 2};
    // displayInfo(s1);
    // // Now copy the school data and modify
    // struct School s2 = s1;
    // strcpy(s2.name, "Khalishpur ML school");
    // s2.EIIN = 1000;
    // displayInfo(s2);

    displayData(&s1);
    // Now assign the address of original data
    struct School *s2 = &s1;
    displayData(s2);
    strcpy(s2->name, "Khalishpur ML School");
    s2->EIIN = 1020;
    displayData(&s1);
    displayData(s2);
}