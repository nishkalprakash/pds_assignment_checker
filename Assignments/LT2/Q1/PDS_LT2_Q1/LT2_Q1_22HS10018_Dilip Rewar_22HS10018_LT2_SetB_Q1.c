#include <stdio.h>
#include <stdlib.h>
/*
* Section 2
* Roll no.: 22HS10018
* Lab Test - 2
* Question - 1
* Description - Management of Records
*/

typedef struct Person{

    char Name[30];
    char Passport_no[10];
    char dob[10];
    char Nationality[15];
}Person;

void read(Person n){
        printf("Name: ");
        scanf("%s",n.Name);
        printf("Passport_no: ");
        scanf("%s",n.Passport_no);
        printf("Nationality:");
        scanf("%s",n.Nationality);
}
int main(){
    int no_of_persons;
    printf("Enter Number of Person: ");
    scanf("%d",&no_of_persons);
    Person arr[5];
    for(int i=0;i<no_of_persons;i++){
        read(arr[i]);
    }
    return 0;
}

