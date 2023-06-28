#include "stdio.h"
#include "ctype.h"

int main(){
    
    char unit;
    float temp;

    printf("Is the temperature in (F) or in (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C')
    {
        printf("\nThe temp is currently in C.");
        printf("\nEnter the temp: ");
        scanf("%f", &temp);
        temp = (temp * 9/5) + 32;
        printf("The temp in F is: %.1f", temp);
    } else if (unit == 'F')
    {
        printf("\nThe temp is currently in F.");
        printf("\nEnter the temp: ");
        scanf("%f", temp);
        temp = ((temp + 32) * 5) / 9;
        printf("The temp in C is: %.1f", temp);
    } else{
        printf("\n%c is not a valid unit of measurement!", unit);
    }

    return 0;
}