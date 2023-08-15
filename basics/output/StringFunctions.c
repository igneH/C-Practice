#include "stdio.h"
#include "string.h"

int main(){

    char string1[] = "ENiGMA";
    char string2[] = "XZD";

    //strlwr(string1);                      //convertes a string to lowercase
    //strupr(string1);                      //convertes a string to uppercase
    //strcat(string1, string2);             //appends string2 to the end of string1
    //strncat(string1, string2, 1);         //appends n characters from string2 to end of string1
    //strcpy(string1, string2);             //copy string2 to string1
    //strncpy(string1, string2, 4);         //copy n characters of string 2 to string1

    //strset(string1, '?');                 //sets all characters of a string to a given character
    //strnset(string1, '?', 2);             //sets first n characters of a sting to a given character
    //strrev(string1);                      //reverse a string

    //int result = strlen(string1);             //returns string length as int
    int result = strcmp(string1,string2);       //string compare all characters (0 = they are the same)
    //int result = strncmp(string1,string2,1);  //string compare n characters
    //int result = strcmpi(string1,string2);    //string compare all characters (ignore case)
    //int result = strnicmp(string1,string2);   //string compare n characters (ignore case)

    (result == 0) ? printf("These strings are the same") : printf("These stringa re not the same");
    

    return 0;
}