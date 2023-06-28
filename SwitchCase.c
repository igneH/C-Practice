#include "stdio.h"

int main(){

    char grade;
    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("nerd.");
        break;
    case 'B':
        printf("not so much nerd.");
        break;
    case 'C':
        printf("calculated my friend.");
        break;
    case 'D':
        printf("bro is limit testing.");
        break;
    case 'F':
        printf("lol fucking noob");
        break; 
    default:
        printf("Please enter only valid grades :)");
        break;
    }
    return 0;
}