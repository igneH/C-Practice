#include "stdio.h"

double square(double);

int main(){

    double x = square(3.14);
    printf("%lf", x);

    return 0;
}

double square(double x){
    return x*x;
}