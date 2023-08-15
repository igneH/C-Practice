#include "stdio.h"

void birthday(char[], int);

int main(){
    
    char name[] = "ENiGMA";
    int age = 19;

    birthday(name, age);
    return 0;
}

void birthday(char name[], int age){
    printf("\nHappy Birthday dear %s!\n", name);
    printf("\nYou are %d y/o!", age);
}