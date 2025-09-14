#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    float salary;
    char name[32];
};

void main() {
    // struct Employee emp1, emp2;

    // emp1.id = 101;
    // emp1.salary = 30000;
    // strcpy(emp1.name, "Asif Akbar");

    // emp2.id = 202;
    // emp2.salary = 40000;
    // strcpy(emp2.name, "Mr. Rahim");
    struct Employee emp1 = {101, 30000, "Asif Akbar"}, emp2 = {202, 40000, "Mr. Rahim"};

    printf("Id = %d\n", emp1.id); 
    printf("Salary = %.3f\n", emp1.salary); 
    printf("Name = %s\n", emp1.name); 

    printf("Id = %d\n", emp2.id); 
    printf("Salary = %.3f\n", emp2.salary); 
    printf("Name = %s\n", emp2.name); 
}