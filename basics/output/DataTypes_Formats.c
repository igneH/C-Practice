#include "stdio.h"
#include "stdbool.h"

int main(){

    //text
    char n = 'N';           //single character      %c
    char name[] = "ENiGMA"; //array of characters   %s

    //floating numbers
    float pi = 3.141592;                //4 bytes (32 bits of precision) 6 - 7 digits    %f
    double piBig = 3.141592653589793;   //8 bytes (64 bits of precision) 14 - 16 didgits %lf

    //boolean
    bool ageOfConsent = true; // 1 byte (true or false) %d

    //characters
    char charInt = 100;    //1 byte (-128 to +127) %d or %c
    unsigned char unsCharInt = 255;  //1 byte (0 to +255) %d or %c (if above 255 it goes back to 0)

    //short integer
    short int shortInt = 32767;             //2 bytes (-32,768 to +32,767) %d (if above = overflow -> -32,768)
    unsigned short int unsShortInt = 65535; //2 bytes (0 to +65,535) %d (int is not necessary to write)

    //integer
    int integer = 2147483647;           //4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int unsInt = 4294967295;   //4 bytes (0 to +4,294,967,295) %u

    //really big integer
    long long int bigInt = 9223372036854775807;                 //8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int unsBigInt = 18446744073709551615U;    //8 bytes (0 to +18 quinitllion) %llu

    //format specifier % = defines and formats a type of data to be displayed
    /*
        %c = character
        %s = string (array of characters)
        %f = float
        %lf = double
        %d = int

        %.1 = decimal precision
        %1 = minimum field with
        %- = left align
    */

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: %-5.2f\n", item1);
    printf("Item 2: %-5.2f\n", item2);
    printf("Item 3: %-5.2f\n", item3);

    return 0;
}