/*
Name: Rajpriya Rani
roll no; 22CS10057
sec2
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Person{      //structure definition
    char name[30];
    char passport_no[10];
    char nationality[15];
    int dob[3];
    }Person;

void read(Person *p,int i)        //function to read one data
{
    getchar();
    printf("\n record %d \n ",(i+1));
    printf("enter name: ");
    gets(p->name);
    printf("enter passport no: ");
    scanf("%s",p->passport_no);
    printf("enter nationality : ");
    scanf("%s",p->nationality);
    printf("enter date of birth in format dd-mm-yyyy (without dash): ");
    scanf("%d",&p->dob[0]);
    scanf("%d",&p->dob[1]);
    scanf("%d",&p->dob[2]);
}

void print(Person *p,int i)       //function to print one data
{
    printf("\n \n record %d \n ",(i+1));
    printf("name: %s ",p->name);
    printf("\n passport no: %s ",p->passport_no);
    printf("\n nationality: %s ",p->nationality);
    printf("\n dob: %d - %d - %d ",p->dob[0],p->dob[1],p->dob[2]);
}

void main()
{
    Person *Persons,*Persons2,*Persons_merged;
    int n,m,i,c=0;
    printf("Enter number of records in first array: ");
    scanf("%d",&n);

    Persons=(Person*)malloc(n*sizeof(Person));      //dynamic memory allocation
    for(i=0;i<n;i++)
        read(&Persons[i],i);      //input values function call
    printf("record entered are: ");
    for(i=0;i<n;i++)
        print(&Persons[i],i);     //printing function call

    printf(" \n Enter number of records in second array: ");
    scanf("%d",&m);

    Persons2=(Person*)malloc(m*sizeof(Person));
    for(i=0;i<m;i++)        //input values function call
        read(&Persons2[i],i);
    printf("record entered are: ");
    for(i=0;i<m;i++)
        print(&Persons2[i],i);        //printing function call

    Persons_merged=(Person*)malloc((m+n)*sizeof(Person));
    for(i=0;i< (n);i++)
        Persons_merged[i]=Persons[i];
    for(i=0;i<m;i++)
        Persons_merged[i+n]=Persons2[i];
    printf("\n records whose nationality is indian : \n");
    for(i=0;i< (m+n);i++)
        {
            if(strcmp(Persons_merged[i].nationality,"India")==0)
                {
                    print(&Persons_merged[i],i);
                    c++;
                }
        }
        if(c==0)
            printf("\n no persons having nationality as indian");
}
