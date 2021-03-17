#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

struct Person
{
    char name[10];
    u_int8_t age;
    uint8_t height;
};

struct Employee
{
    char *name;
};


void main() {

    struct Person person;
    //person.name = "André";
    stpcpy(person.name, "André");
    person.age = 35;
    person.height = 189;

    struct Employee employee;
    employee.name = "Luis";

    printf("Person : %s\n", &person);
    printf("Employee : %s\n", &employee);

    printf("Person X: %x\n", &person);
    printf("Employee X: %x\n", &employee);
    
    printf("Person name : %s\n", person.name);  

    printf("Employee name: %s\n", employee.name); 
    printf("Employee name ADDRESS: %x\n", *employee.name);   
    
    return;
}