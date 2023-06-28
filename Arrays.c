#include "stdio.h"
#include "string.h"

void oneDArray();
void twoDArray();
void stringArray();

int main(){

    //oneDArray();
    //twoDArray();
    stringArray();

    return 0;
}

void oneDArray(){
    //array = a data structure that can store many values of the same data type.

    double prices[6] = {5.0, 10.0, 15.0, 25.0, 20.0}; //double prices[] also allowed
    prices[6] = 23.0;

    for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
    {
        printf("%lf\n", prices[i]);
    }
}

void twoDArray(){
    //2D array = an array, where each element is an entire array
    //           useful if you need a matrix, grid, or tables of data

    /*
    int numbers[][] = {
                        {1,2,3},
                        {4,5,6}
                        };
    */
    
    int numbers[3][3];

    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    printf("Rows: %d\n", rows);
    printf("Columns: %d\n", columns);

    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;
    numbers[2][0] = 7;
    numbers[2][1] = 8;
    numbers[2][2] = 9;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
}

void stringArray(){
    char cars[][10] = {"Mustang", "Corvette", "Camaro"}; //1st [] = how many strings; 2nd [] = length of a string

    //cars[0] = "Tesla";
    strcpy(cars[0], "Tesla");

    for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }
}