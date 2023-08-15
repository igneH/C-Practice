#include "stdio.h"
#include "string.h"

void forLoop();
void whileLoop();
void doWhileLoop();
void nestedLoop();

int main()
{

    // forLoop();
    // whileLoop();
    // doWhileLoop();
    nestedLoop();
    return 0;
}

void forLoop()
{
    // for loop = repeats a section of code a limited amount of times

    for (int i = 10; i >= 1; i -= 2)
    {
        printf("%d\n", i);
    }
}
void whileLoop()
{
    // while loop = repeats a section of code possibly unlimited times
    // WHILE some condiditon remains true
    // a while loop might not execute at all

    char name[25];

    printf("\nWhat's your name?: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0)
    {
        printf("You didn't enter your name!");
        printf("\nWhat's your name?: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }
    printf("Hello %s!\n", name);
}
void doWhileLoop()
{
    // while loop = checks a condition, THEN executes a block of code if condition is true
    // do while loop = always exectues a block of code once, THEN checks a condition

    int number = 0;
    int sum = 0;

    do
    {
        printf("Enter a # above 0: ");
        scanf("%d", &number);
        sum += number;
    } while (number > 0);
    printf("Sum: %d", sum);
}

void nestedLoop()
{
    // nested loop = a loop inside antoher loop
    int rows;
    int columns;
    char symbol;

    printf("\nEnter # of rows: ");
    scanf("%d", &rows);

    printf("\nEnter # of columns: ");
    scanf("%d", &columns);
    scanf("%c");

    printf("\nEnter a symbol to use: ");
    scanf("%c", &symbol);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j < columns; j++)
        {
            printf("%c\t", symbol);
        }
        printf("\n");
    }
}