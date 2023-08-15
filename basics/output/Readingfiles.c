#include "stdio.h"

int main(){

    FILE *pF = fopen("C:\\Users\\alexa\\Desktop\\things.txt", "r");
    char buffer[255];

    if (pF == NULL)
    {
        printf("Cannot open that file!\n");
    }else{
        while (fgets(buffer, 255, pF) != NULL)
            {
                printf("%s", buffer);
            }
            fclose(pF);
    }
    
    return 0;
}