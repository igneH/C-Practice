#include "stdio.h"

enum Day{Mon=1, Tue=2, Wed=3, Thu=4, Fri=5, Sat=6, Sun=7};

int main(){
    /* enum = a user defined type of named integer identifiers
              helps to make a program more readable */

    enum Day today = Tue;

    printf("%d", today); //enums are NOT strings, but they can be treated as int

    if (today == Sun || today == Sat)
    {
        printf("\nWeekend WUHU!");
    }else{
        printf("\nSchool booooooo >:(");
    }
    
    return 0;
}