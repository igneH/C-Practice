#include "stdio.h"

int main(){
    
    FILE *pF = fopen("test.txt", "w");

    fprintf(pF, "Lillias Cock");

    fclose(pF);
    

/*
   if(remove("test.txt") == 0){
    printf("That file was deleted successfully!");
   }else{
    printf("That file was not delted!");
   }
*/
    return 0;
}