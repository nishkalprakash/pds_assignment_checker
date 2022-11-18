/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Assignment class: 4
Test: 2
*/

#include<stdio.h>
#define MAX 1000    //Considering MAX large enough

struct Student
{
    char name[100];     //Considering name size large enough
    char surname[100];  //Defining surname too due to whitespace in input
    char gender[10];
    float marks;
};

void print(struct Student a[],int n)  //printing all students' data
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%s %s %s - %0.2f\n",a[i].name,a[i].surname,a[i].gender,a[i].marks);
    }
}

void bestgirl(struct Student a[],int n)
{
    int i,m=0,p;
    for(i=0; i<n; i++)
    {
        if(a[i].gender[0]=='g'&&a[i].marks>m)   //First character equality is enough to distinguish a "boy" or "girl"
        {
            m=a[i].marks;
            p=i;                                //Storing the index of the max marks girl
        }
    }
    printf("Best girl student: %s %s",a[p].name,a[p].surname);
}

int main()
{
    struct Student a[MAX];
    int n,i;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter the student details:\n");
    for(i=0; i<n; i++)
    {
        scanf("%s%s",&a[i].name,&a[i].surname);
        scanf("%s",&a[i].gender);
        scanf("%f",&a[i].marks);
    }
    print(a,n);
    bestgirl(a,n);
    return 0;
}
