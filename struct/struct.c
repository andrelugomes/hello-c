#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

struct Person
{
    char name[10];
    u_int8_t age;
    uint height;
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
    
    printf("Person : %s\n",person.name);  

    printf("Employee : %s\n",employee.name);   
    
    return;
}