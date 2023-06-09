/*
Name: Aditya Raj Shit
Roll no. : 22AE10002
Set: B
Question: 1
*/

#include<stdio.h>

typedef struct
{
    char name[30];
    char passport_no[10];
    char nationality[15];
    char dob[10];
}Person;

//Person Persons[100];

void read(Person* p,int n)
{
    for(int i=0;i<n;i++){
        printf("** Enter details of Person %d **\n",i);
        printf("Name: ");
        scanf("%s",p[i].name);
        //gets(p[i].name,30);
        printf("Passport number: ");
        scanf("%s",p[i].passport_no);
        //gets(p[i].passport_no);
        printf("Nationality: ");
        scanf("%s",p[i].nationality);
        //gets(p[i].nationality);
        printf("Date of Birth: ");
        scanf("%s",p[i].dob);
        //gets(p[i].dob);
        printf("\n");
    }
}

void print(Person p[],int n)
{
    for(int i=0;i<n;i++){
        printf("** Person %d **\n",i);
        printf("%s\n",p[i].name);
        printf("%s ",p[i].passport_no);
        printf("%s ",p[i].nationality);
        printf("%s ",p[i].dob);
        printf("\n\n");
    }
}

void merge(Person p1[],int n,Person p2[],int m,Person pMerged[])
{
    for(int i=0;i<n;i++){
        pMerged[i]=p1[i];
    }
    for(int i=n;i<m+n;i++){
        pMerged[i]=p2[i];
    }
}

void India(Person p[],int size)
{
    Person pOut[100];
    int index=-1;
    for(int i=0;i<size;i++){
        if(p[i].nationality=="India"){
            index++;
            pOut[index]=p[i];
        }
    }

    if(index==-1){
        printf("\nNo persons having nationality as India");
    }
    else{
        printf("\nAll persons having Nationality as India: \n");
        print(pOut,index+1);
    }


}

int main()
{
    int n;
    printf("Enter number of persons:");
    scanf("%d",&n);

    Person* Persons;
    Persons=(Person*)malloc(sizeof(Person)*n);
    //Person Persons[100];
    read(Persons,n);


    int m;
    printf("Enter number of persons: ");
    scanf("%d",&m);

    Person Persons2[100];
    read(Persons2,m);

    Person Persons_merged[200];
    /*merge(Persons,n,Persons2,m,Persons_merged);

    print(Persons,n);
    India(Persons_merged,n+m);*/


    for(int i=0;i<n;i++){
        Persons_merged[i]=Persons[i];
    }
    for(int i=n;i<m+n;i++){
        Persons_merged[i]=Persons2[i];
    }



    Person pOut[100];
    int index=-1;
    for(int i=0;i<m+n;i++){
        if(Persons_merged[i].nationality=="India"){
            index++;
            pOut[index]=Persons_merged[i];
        }
    }

    if(index==-1){
        printf("\nNo persons having nationality as India");
    }
    else{
        printf("\nAll persons having Nationality as India: \n");
        print(pOut,index+1);
    }
}
