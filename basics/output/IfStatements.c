#include "stdio.h"

int main(){

    int age;
    printf("\nWhat is your age?: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("You are too old.");
    } else if(age < 0){
        printf("You aren't even born yet.");
    } else{
        printf("You are too young.");
    }
    return 0;
}