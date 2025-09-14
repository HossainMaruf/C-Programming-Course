#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    float salary;
    char name[32];
};

void main() {
    // Initialize 1
    // struct Employee e;
    // e.id = 12;
    // e.salary = 30000.5;
    // // e.name = "Maruf Hossain"; // ERROR
    // strcpy(e.name, "Maruf Hossain");

    // Initialize 2
    // struct Employee e = {123, 200000.5, "Arif Hossain"};

    // Initialize 3
    struct Employee e = {.name = "Hossain Maruf", .salary = 20000.5, .id = 100}; 
    // Initialize 4
    // (struct Student){.name="Babul", .cgpa=35000, .id = 300}; // only set the values
    printf("Id = %d\n", e.id); 
    printf("Salary = %.3f\n", e.salary); 
    printf("Name = %s\n", e.name); 
}