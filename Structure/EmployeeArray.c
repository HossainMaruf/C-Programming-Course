#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    float salary;
    char name[32];
};

void main() {
    // struct Employee emp[3]; // emp[0], emp[1], emp[2]
    // emp[0].id = 101;
    // emp[0].salary = 30000;
    // strcpy(emp[0].name, "ABCD");
    // emp[1].id = 102;
    // emp[1].salary = 40000;
    // strcpy(emp[1].name, "DEF");
    // emp[2].id = 103;
    // emp[2].salary = 50000;
    // strcpy(emp[2].name, "XYZ");

    struct Employee emp[3] = {
        {101, 30000, "ABCD"}, 
        // {102, 40000, "DEF"}, 
        {.name = "DEF", .salary = 40000, .id = 102},
        {103, 50000, "XYZ"}};
    /**
     * int arr[3] = {2, 3, 5}
     */

    printf("Id = %d\n", emp[0].id); 
    printf("Salary = %.3f\n", emp[0].salary); 
    printf("Name = %s\n", emp[0].name); 

    printf("Id = %d\n", emp[1].id); 
    printf("Salary = %.3f\n", emp[1].salary); 
    printf("Name = %s\n", emp[1].name); 

    printf("Id = %d\n", emp[2].id); 
    printf("Salary = %.3f\n", emp[2].salary); 
    printf("Name = %s\n", emp[2].name); 
}