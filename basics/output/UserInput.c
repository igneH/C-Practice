#include "stdio.h"
#include "string.h"

int main(){

    char name[25]; //bytes
    int age;

    printf("\nWhat is your name?: ");
    //scanf("%s", &name);           //if there is no whitespace
    fgets(name, 25, stdin);         //if you have whitespace between (it includes the newline char at the end)             
    name[strlen(name) -1] = "\0";   //sets the second last array to \0 (which means end of string (it ends the string before the new line char))

    printf("How old are you?: ");
    scanf("%d", &age);

    printf("\nYou are %d years old.", age);
    printf("\nYour name is %s", name);
    return 0;
}