#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    float salary;
    char name[32];
};

void main() {
    // struct Employee e[3];
    // e[0].id = 101;
    // e[0].salary = 10000; 
    // strcpy(e[0].name, "Akbar Hossain");
    // e[1].id = 1001;
    // e[1].salary = 20000; 
    // strcpy(e[1].name, "Mr. Rahim");
    // e[2].id = 2001;
    // e[2].salary = 30000; 
    // strcpy(e[2].name, "Mr. Karim");

    struct Employee e[3] = {
        {.name = "Akbar", .salary = 1000, .id = 101},
        {.salary = 20000, .name = "Rahim", .id = 1001},
        {.name = "Karim", .id = 2001, .salary = 30000}};



    printf("Id = %d\n", e[0].id); 
    printf("Salary = %.3f\n", e[0].salary); 
    printf("Name = %s\n", e[0].name);

    printf("Id = %d\n", e[1].id); 
    printf("Salary = %.3f\n", e[1].salary); 
    printf("Name = %s\n", e[1].name); 

    printf("Id = %d\n", e[2].id); 
    printf("Salary = %.3f\n", e[2].salary); 
    printf("Name = %s\n", e[2].name); 
}