#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    float cgpa;
    char name[32];
};

void main() {
    // Initialize 1
    // struct Student st;
    // st.roll = 12;
    // st.cgpa = 3.23;
    // // st.name = "Maruf Hossain"; // ERROR
    // strcpy(st.name, "Maruf Hossain");

    // Initialize 2
    // struct Student st = {123, 2.44, "Arif Hossain"};

    // Initialize 3
    // struct Student st = {.name = "Hossain Maruf", .cgpa = 2.33, .roll = 100}; 
    // Initialize 4
    // (struct Student){.name="Babul", .cgpa=3.44, .roll = 300}; // only set the values
    printf("Roll = %d\n", st.roll); 
    printf("CGPA = %.3f\n", st.cgpa); 
    printf("Name = %s\n", st.name); 
}