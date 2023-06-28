#include "stdio.h"

int main(){
    /* memory = an array of bytes within RAM (street)
       memory block = a single unit (byte) within meomory, use dto hold some value (perosn)
       memory address = the address of where a memory block is located (house address)
    */

    char x = 'X';
    double y = 2.2;
    int z = 2;

    printf("x: %d bytes\n", sizeof(x));
    printf("y: %d bytes\n", sizeof(y));
    printf("z: %d bytes\n", sizeof(z));

    printf("x: %p\n", &x);
    printf("y: %p\n", &y);
    printf("z: %p\n", &z);
      
    return 0;
}