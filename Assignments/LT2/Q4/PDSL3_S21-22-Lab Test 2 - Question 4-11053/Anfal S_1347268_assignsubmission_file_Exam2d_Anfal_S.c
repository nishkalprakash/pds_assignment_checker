/*
Name: Anfal S
Roll no: 21AE10003
Section: 3
Dept: AE
Package: Codeblocks
exam: 2
Operating System: windows
*/
#include<stdio.h>
#define MAX 60
struct Student{    // structure
char firstName[20];
char lastName[20];
char Sex[10];
float marks;
};
void bestgirl(struct Student S[],int n) // function to identify the best girl.
{
    int i,high;
    for(i=0;i<n;i++)
    {
        if(S[i].Sex[0]=='g'&&S[i].Sex[1]=='i'&&S[i].Sex[2]=='r'&&S[i].Sex[3]=='l')
        {
            if(high<=S[i].marks) high=S[i].marks;
        }
    }
    for(i=0;i<n;i++)
    {
        if(S[i].Sex[0]=='g'&&S[i].Sex[1]=='i'&&S[i].Sex[2]=='r'&&S[i].Sex[3]=='l')
        {
            if(high==S[i].marks) printf("%s is the best girl",S[i].firstName);
        }
    }

}
int main()
{
    struct Student S[MAX];
    int n,i;
    printf("enter the no of students:");
    scanf("%d",&n);
    printf("enter the details of each student:\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",S[i].firstName); //student input
        scanf("%s",S[i].lastName);
        scanf("%s",S[i].Sex);
        scanf("%f",S[i].marks);
        printf("\n");
    }
    printf("Student details");
    for(i=0;i<n;i++)
    {
        printf("%s ",S[i].firstName);
        printf("%s  ",S[i].lastName);
        printf("%s  ",S[i].Sex);
        printf("%f",S[i].marks);
        printf("\n");
    }
    bestgirl(S,n);
    return 0;
}
