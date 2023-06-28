#include "stdio.h"
#include "math.h"

int main(){

    double A, B, C;

    printf("\nEnter side A: ");
    scanf("%lf", &A);
    printf("\nEnter side B: ");
    scanf("%lf", &B);
    
    C = sqrt(pow(A, 2) + pow(B, 2));

    printf("Site C is: %lf", C);

    return 0;
}