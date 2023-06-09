/*Name: Abhiraj Ranjan
Roll Number: 22MI10002
Section: 2
Assignment: 8
Question: 1
Description: Complex Numbers*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
typedef struct      //My code is working for single names only
{
    char birth[10];
} date;
typedef struct
{
    char name[30];
    char passport_no[10];
    char nationality[15];
//date *dob;
    char dob[10];
} Person;

void read(Person *p)
{
    scanf("%s%s%s%s",p->name,p->passport_no,p->nationality,p->dob);
    /*scanf("%s",p->passport_no);
    scanf("%s",p->nationality);
    scanf("%s",p->dob);// doubt here*/
    return ;

}
void print(Person p)
{
    printf("%s\n",p.name);
    printf("%s %s %s\n",p.passport_no,p.nationality,p.dob);
    return;
}


int main()
{
    int n,i;
    scanf("%d",&n);
    Person *Persons,*Persons2,*Persons_merged;
    Persons=(Person*)malloc(n*sizeof(Person));

    for(i=0; i<n; i++)
    {
        read(&Persons[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("**Person %d**\n",i);
        print(Persons[i]);
        printf("\n");
    }

    int m;

    scanf("%d",&m);

    Persons2=(Person*)malloc(m*sizeof(Person));
    for(i=0; i<m; i++)
    {
        read(&Persons2[i]);
    }
    /*for(i=0;i<m;i++){
            printf("**Person %d**\n",i);
        print(Persons2[i]);
    printf("\n");
    }*/
    printf("All persons having nationality as India\n");
    int count=0;
    for(i=0; i<n; i++)
    {
        if(strcmp("India",Persons[i].nationality)==0)
        {
            count++;
            printf("**Person %d**\n",i);
            print(Persons[i]);
            printf("\n");

        }
    }
    for(i=0; i<m; i++)
    {
        if(strcmp("India",Persons2[i].nationality)==0)
        {
            count++;
            printf("**Person %d**\n",i+n);
            print(Persons2[i]);
            printf("\n");
        }
    }
    if(count==0)
    {
        printf("No peresons having nationality as India\n");
    }
    return 0;
}
