#include "stdio.h"

struct Student{
    char name[12];
    float funnyNumb;
};

int main(){
    struct Student student1 = {"Ruby", 6.9};
    struct Student student2 = {"Hengi", 4.20};
    struct Student student3 = {"MAT", 8.8};
    struct Student student4 = {"Jonny", 1.8};

    struct Student students[] = {student1, student2, student3,student4};

    for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        printf("%-12s\t", students[i].name);
        printf("%.2f\n", students[i].funnyNumb);
    }
    return 0;
}