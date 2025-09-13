#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    float salary;
    char name[32];
};

void main() {
    // struct Employee e1, e2;
    // e1.id = 101;
    // e1.salary = 10000; 
    // strcpy(e1.name, "Akbar Hossain");

    // e2.id = 1001;
    // e2.salary = 20000; 
    // strcpy(e2.name, "Mr. Rahim");

    // struct Employee e1 = {101, 10000, "Akbar Hossain"}, e2 = {1001, 20000, "Mr. Rahim"};
    struct Employee e1 = {.salary = 10000, .id = 101, .name = "Akbar Hossain"}, e2 = {.name = "Mr. Rahim", .salary = 20000, .id = 1001};

    printf("Id = %d\n", e1.id); 
    printf("Salary = %.3f\n", e1.salary); 
    printf("Name = %s\n", e1.name);

    printf("Id = %d\n", e2.id); 
    printf("Salary = %.3f\n", e2.salary); 
    printf("Name = %s\n", e2.name); 
}