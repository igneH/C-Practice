#include "stdio.h"

int main(){
    
    int x;       //declaration
    x = 123;     //initialization
    int y = 321; //declaration + initialization

    int age = 19;               //integer
    float height = 1.69;        //floating point number
    char chemisteryGrade = 'C'; //single character
    char name[] = "ENiGMAXZD";  //array of characters; strings are technically objects

    printf("Hello %s\n", name);                                         //array of characters %s (string)
    printf("You are %d y/o\n", age);                                    //integer %d (decimal)
    printf("Your average chemistery Grade is %c\n", chemisteryGrade);   //character %c (char)
    printf("Your height is %f\n", height);                              //floating point number %f (float)

    return 0;
}