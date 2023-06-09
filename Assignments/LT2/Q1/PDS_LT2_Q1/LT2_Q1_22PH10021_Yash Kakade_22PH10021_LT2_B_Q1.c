/*
* Section 2
* Roll No.: 22PH10021
* Name : Kakade Yash Ashok
* Lab Test - 2
* Description : Management of records
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct dob{
int dd;
int mm;
int yyyy;

};

struct person{
    char name[30];
    char passport_no[10];
    char nationality[15];
    struct dob date;

};

void read(struct person *persons, int i){
    printf("Enter records of person %d ",i);

    printf("\nEnter name: ");
    scanf("%[\n]s",persons[i].name);
    //gets((persons+i)->name);


    printf("\nEnter passport no.: ");
    //scanf("%s",persons[i].passport_no);
    scanf("%s",(persons+i)->passport_no);


    printf("\nEnter nationality: ");
    //scanf("%s",persons[i].nationality);
    scanf("%s",(persons+i)->nationality);

    printf("\nEnter dob: ");
    scanf("%d%",persons[i].date.dd);
    scanf("%d%",persons[i].date.mm);
    scanf("%d%",persons[i].date.yyyy);

}

void print(struct person *persons, int i){

    printf("\nPerson %d",i);
    printf("\n%s",persons[i].name);
    printf("  %s",persons[i].passport_no);
    printf("  %s",persons[i].nationality);
    printf("  %d-%d-%d",persons[i].date);


}





int main(){
    int n,i;

    printf("Enter no. of persons: ");
    scanf("%d",&n);

    struct person *persons;
    persons=(struct person*)malloc(n*sizeof(struct person));

    for(i=0;i<n;i++){
        read(persons,i);
    }

    for(i=0;i<n;i++){
        print(persons,i);
    }







return 0;
}
