#include "stdio.h"

void printAge(int*);

int main(){
    /* pointer = a "variable-like" rewference that hold a memory address to another variable, array, etc.
                    some tasks are performed more easily with pointers
                    * = indirection operator (value at address)
    */

    int age = 12;
    int *pAge = NULL;
    pAge = &age;

    //printf("address of age: %p", &age);
    //printf("value of pAge: %p", pAge);

    //printf("size of age: %d bytes",sizeof(age));
    //printf("sizhe of pAge: %d bytes", sizeof(pAge));

    //printf("value of age: %d", age);
    //printf("value at stored address: %d\n", *pAge); //dereferencing

    printAge(pAge);

    return 0;
}

void printAge(int *pAge){
    printf("You are %d years old\n", *pAge);
}