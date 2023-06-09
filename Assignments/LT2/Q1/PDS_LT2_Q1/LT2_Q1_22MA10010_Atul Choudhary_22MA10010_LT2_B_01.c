/*
NAME= Atul choudhary
roll no. =22MA10010
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct person{
    char name[30];
    char passport_no[10];
    char nationality[15];

    struct date
    {
        int D;
        int M;
        int Y;
    }dob;
}persons[50];

void print(int r)
{

    int i,n;
    for (i=0; i<r;i++){
        printf("\n%s",persons[i].name );
        printf("\n %s %s\t %d-%d-%d" , persons[i].passport_no, persons[i].nationality, &persons[i].dob.D, &persons[i].dob.M, &persons[i].dob.Y );
    }

}
void origin(int r)
{  int india;
    for (int i=0; i<r;i++)
    {
        if(persons[i].nationality==india){
        printf(" \n\All Persons having Nationality india:");


        printf("\n%s",persons[i].name );
        printf("\n %s %s\t " , persons[i].passport_no, india );
        }
        if(persons[i].nationality!=india){
            printf("\n no persons having nationality as india");
        }
    }
}



int main(){
    int n,r,i, india;

    printf("how many person's details you want to add: ");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        printf("\n\t Enter details of person %d", i+1);
        printf("\n Name of person: ");
        scanf("%s", persons[i].name);
        printf(" Enter his passport number: ");
        scanf("%s", persons[i].passport_no);
        printf(" Enter his nationality: ");
        scanf("%s", persons[i].nationality);
        printf("Enter the date of birth: ");
        scanf("%d-%d-%d",&persons[i].dob.D, &persons[i].dob.M, &persons[i].dob.Y  );

    }

    print(n);
    origin(n);










return 0;

}
