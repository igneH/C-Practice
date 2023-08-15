#include "stdio.h"
#include "string.h"

struct Player{
    char name[12];
    int score;
};

int main(){

    /*struct = collection of related members ("variables")
               they can be of different data types
               listed under one name of block of memory
    */

    struct Player player1, player2;

    strcyp(player1.name, "ENiGMA");
    player1.score = 4;

    strcyp(player2.name, "Ruby");
    player1.score = 3;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score);

    return 0;
}