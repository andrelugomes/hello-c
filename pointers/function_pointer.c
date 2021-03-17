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

void newPerson(char name[], u_int8_t age, uint8_t height, void(*function_pointer)(struct Person)) {

    struct Person person;

    stpcpy(person.name, name);
    person.age = age;
    person.height = height;

    (*function_pointer)(person);
}

void printPerson(struct Person person) {
    printf("name : %s\n", person.name);  
    printf("age : %d\n", person.age);  
    printf("height : %d\n", person.height);  
};

void printPerson2(struct Person person) {
    printf("name : %s | age : %d | height : %d\n",person.name, person.age, person.height);  
};

void main() {

    newPerson("André", 36, 187, &printPerson);    
    newPerson("Luis", 35, 189, &printPerson2);  

    printf("printPerson : %x\n", &printPerson);  
    printf("printPerson2 : %x\n", &printPerson2);  
    
    return;
}