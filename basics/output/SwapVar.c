#include "stdio.h"
#include "string.h"

void charSwap();
void stringSwap();

int main(){

   charSwap();
   stringSwap();

    return 0;
}

void charSwap(){
    char x = 'X';
    char y = 'Y';
    char temp;

    temp = x;
    x = y;
    y = temp;

    printf("x = %c", x);
    printf("y = %c", y);
}

void stringSwap(){
    char water[15] = "water";
    char lemonade[15] = "lemonade";
    char temp[15];

    strcpy(temp, water);        //when swapping strings, set the strings to same size
    strcpy(water, lemonade);
    strcpy(lemonade, temp);

    printf("x = %s", water);
    printf("y = %s", lemonade);

}