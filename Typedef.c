#include "stdio.h"

//typedef char user[25];

 typedef struct{
    char name[25];
    char password[12];
    int id;
} User_t;


int main(){
    //typedef = reserved keyword that gives an existing datatype a "nickname"

    //user user1 = "ruby catgirl uwu";

    User_t user1 = {"Hengi", "passwort", 1234567890};
    User_t user2 = {"Ruby", "femboy", 987654321};

    printf("User 1 name: %s\n", user1.name);
    printf("User 1 password: %s\n", user1.password);
    printf("User 1 ID: %d\n", user1.id);
    printf("\n");
    printf("User 2 name: %s\n", user2.name);
    printf("User 2 password: %s\n", user2.password);
    printf("User 2 ID: %d\n", user2.id);

    return 0;
}