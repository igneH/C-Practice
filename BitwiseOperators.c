#include "stdio.h"

int main(){
    /* btiwise operators = special operators used in bit level programming

        & = AND
        | = OR
        ^ = XOR
        << = left shift
        >> = right shift
    */

    int x = 6;   // 6 = 00000110
    int y = 12;  //12 = 00001100
    int z = 0;   // 0 = 00000000

    z = x & y;   // 4 = 00000100
    printf("AND =  %d\n", z);

    z = x | y;   //14 = 00001110
    printf("OR = %d\n", z);

    z = x ^ y;   //10 = 00001010
    printf("XOR = %d\n", z);

    z = x << 2;  //24 = 00011000
    printf("SHIFT LEFT = %d\n", z);

    z = x >> 2;  // 3 = 00000011
    pirntf("SHIFT RIGHT = %d\n", z);

    return 0;
}