#include "stdio.h"
#include "stdbool.h"

int main(){

    //logical operators = && (AND) check if two conditions are true

    float temp = 25;
    bool sunny = false;

    if (temp >= 0 && temp <= 30 && sunny)
    {
        printf("\nThe weather is good");
    } else{
        printf("\nThe weather is not good");
    }

    // logical operators = || (OR) check if at least one of the condiditons is true

    if(temp <= 0 || temp >= 30){
        printf("\nThe weather is bad!");
    }else{
        printf("\nThe weather is good!");
    }

    // logical operators =  ! (NOT) reverse the state of a condition

    if(!sunny){
        printf("\nIt's cloudy outside!");
    }else{
        printf("\nIt's sunny outside!");
    }
    
    return 0;
}