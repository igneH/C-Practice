#include "stdio.h"

void sortInt(int[], int);
void sortChar(char[], int);
void printInt(int[], int);
void printChar(char[], int);

int main(){

    int arrayInt[] = {9,2,5,7,1,4,3};
    char arrayChar[] = {'F', 'A', 'D', 'B', 'C'};
    int size = sizeof(arrayInt)/sizeof(arrayInt[0]);

    //sortInt(arrayInt, size);
    sortChar(arrayChar, size);
    //printInt(arrayInt, size);
    printChar(arrayChar, size);

    return 0;
}

void sortInt(int arrayInt[], int size){
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if (arrayInt[j] > arrayInt[j+1])
            {
                int temp = arrayInt[j];
                arrayInt[j] = arrayInt[j+1];
                arrayInt[j+1] = temp;
            }
        }
    }
}

void printInt(int array[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d", array[i]);
    }
}

void sortChar(char arrayChar[], int size){
for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if (arrayChar[j] > arrayChar[j+1])
            {
                int temp = arrayChar[j];
                arrayChar[j] = arrayChar[j+1];
                arrayChar[j+1] = temp;
            }
        }
    }
}

void printChar(char arrayChar[], int size){
 for (int i = 0; i < size; i++)
    {
        printf("%c", arrayChar[i]);
    }
}