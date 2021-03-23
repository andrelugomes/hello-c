#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#define Class struct // change Class word to struct before compile

//Main Struct
Class Person
{
    char name[10];
    u_int8_t age;
    uint8_t height;
    void(*show)(Class Person *);
};

//Print person by self
void print_self(Class Person *self) {
    printf("name : %s | age : %d | height : %d\n",self->name, self->age, self->height);  
};

//Person Constructor
Class Person * newPerson(char name[], u_int8_t age, uint8_t height) {
    //O.O
    //Pointers to a Struct
    //Pointers to methods

    //new "instance"
    //Reserve Stack Space as Struct size
    Class Person *self = (Class Person *)malloc(sizeof(Class Person));

    stpcpy(self->name, name);
    self->age = age;
    self->height = height;
    self->show = &print_self;

    return self;
}

void main() {
    Class Person *person = (Class Person *)newPerson("André", 36, 189);

    person->show(person);
    
    return;
}