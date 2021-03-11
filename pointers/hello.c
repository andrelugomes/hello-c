#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {

    //Stack memory 
    char hello[] = "Hello World";

    printf("Hello: %s\n", hello);
    printf("Hello Decimal: %d\n", hello);
    printf("Hello Hexdecimal: %x\n", hello);

    printf("&Hello String: %s\n", &hello);
    printf("&Hello Decimal: %d\n", &hello);
    printf("&Hello Hexdecimal: %x\n\n", &hello);

    //Allocate Heap memory space. Store *hello2 on Stack as a Pointer
    char *hello2 = malloc(sizeof(hello)); 
    strcpy(hello2, hello); //Copy 

    printf("Hello2: %s\n", hello2);
    printf("Hello2 Decimal: %d\n", hello2);
    printf("Hello2 Hexdecimal: %x\n", hello2);

    printf("&Hello2 String: %s\n", &hello2);
    printf("&Hello2 Decimal: %d\n", &hello2);
    printf("&Hello2 Hexdecimal: %x\n\n", &hello2);

    //*hello3 on Stack as a Pointer
    char *hello3 = hello2 + 6;
    strcpy(hello2, hello);
    printf("Hello3: %s\n", hello3);
    printf("Hello3 Decimal: %d\n", hello3);
    printf("Hello3 Hexdecimal: %x\n", hello3);

    printf("&Hello3 String: %s\n", &hello3);
    printf("&Hello3 Decimal: %d\n", &hello3);
    printf("&Hello3 Hexdecimal: %x\n\n", &hello3);

    return;
}