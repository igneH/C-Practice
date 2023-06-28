#include "stdio.h"

int findMax(int, int); //function prototype

/*
  WHAT IS IT?
  Function declaration, w/o a body, before main()
  Ensure that calls to a function are with the correct arguments

  IMPORTANT NOTES
  Many C compilers do not check for parameter matching
  Missing arguments will result in unexpected behaviour
  A function prototype causes the compiler to flag an error if arguments are missing

  ADVANTAGES
  1. Easier to navigate a programm w/ main() at the top
  2. Helps with debugging
  3. Commonly used in header files  
*/

int main(){

    // tenary operator = shortcut to if/else when assigning/returning a value
    // (conditin) ? value if true : value if false

    int max = findMax(3, 5);

    printf("%d", max);

    return 0;
}

int findMax(int x, int y){
  return (x > y) ?  x : y;
}