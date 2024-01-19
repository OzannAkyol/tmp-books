#include <stdio.h>

struct Students{
    char  name[50];
    char  surName[50];
    int   age;
    float totalMarks;
}


void displayFunction(char printedValue){

    printf("%s" + printedValue);

}


int main(){

    struct Student st1,st2;
    prtintf("Name of first srudent: ");
    scanf("%s" , st1.name);

    prtintf("Surname for other student:");
    scanf("%s" , st1.surName);
    
    displayFunction(st1.name);
    displayFunction(st1.surName);

}