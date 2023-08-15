#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main(){
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses = 0;
    int answer;

    //uses current time as seed
    srand(time(0));

    //generate a random number between MIN and MAX
    answer = (rand() % MAX) + MIN;

    do{
        printf("Enter a guess(1-100): ");
        scanf("%d", &guess);
        if (guess > answer)
        {
            printf("Too high!\n");
        }
        else if (guess < answer)
        {
            printf("Too low!\n");
        }
        else{
            printf("Nailed it Pog!\n");
        }
        guesses++;   
        
    }while (guess != answer); 

    printf("\n************");
    printf("\nAnswer: %d", answer);
    printf("\nGuesses: %d", guesses);
    printf("\n************");
    return 0;
}