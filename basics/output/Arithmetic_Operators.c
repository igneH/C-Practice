#include "stdio.h"

int main(){
    //arithmetic operators
    /*
        + (additoin)
        - (subtraction)
        * (multipication)
        / (division)
        % (modulus)
        ++ (increment)
        -- (decrement)
    */

   int x = 5;
   int y = 2;

   int z = x + y;

   //int z = x - y; = 3
   //int z = x * y; = 10
   //float z = x / (float) y; = 2.500000
   //int z = x % y; = 1
   //x++; = 6
   //x--; = 4

   printf("%d", z);

   /*
    augmented assignment operators = used to replace a statement where an operator
                                     takes a variable as one of its arguments and
                                     then assigns the result back to the same vairable
                                     x = x +1;
                                     x += 1;
   */

    int a = 10;
    //a = a + 2;
    //a += 2;

    //a = a - 3;
    //a -= 3;

    //a = a*  5;
    //a *= 5;

    //a = a / 5;
    //a /= 5;

    //a = a % 2;
    //a %= 2;

    return 0;
}