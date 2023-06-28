#include "stdio.h"

int main(){

    char operator;
    double numb1;
    double numb2;
    double result;

    printf("\nEnter an operator: (+ - * /)");
    scanf("%c", &operator);

    printf("\nEnter number 1: ");
    scanf("%lf", &numb1);

    printf("\nEnter number 2: ");
    scanf("%lf", &numb2);

    switch (operator)
    {
    case '+':
        result = numb1 + numb1;
        printf("\nResult: %.2lf", result);
        break;
    case '-':
        result = numb1 - numb2;
        printf("\nResult: %.2lf", result);
        break;
    case '*':
        result = numb1 * numb2;
        printf("\nResult: %.2lf", result);
        break;
    case '/':
        result = numb1 / numb2;
        printf("\nResult: %.2lf", result);
    default:
        printf("%c is not a valid operator!", operator);
        break;
    }

    return 0;
}