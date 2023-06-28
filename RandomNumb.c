#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main(){
    //pseudo radnom numbers = A set of values or elements that are statistically random
    //                        (Don't use these for any sort of cryptographic security)

    srand(time(0)); //s - seed; rand - random; without that the rand() will always give the same number

    int randNumb = (rand() % 6) + 1;

    printf("%d", randNumb);

    return 0;
}