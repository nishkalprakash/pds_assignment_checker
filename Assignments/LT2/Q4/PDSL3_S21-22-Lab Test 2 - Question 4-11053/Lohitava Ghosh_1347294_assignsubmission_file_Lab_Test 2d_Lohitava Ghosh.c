/*
Name:Lohitava Ghosh
Roll no.:21AE10023
Department:Aerospace Engg Btech.
Package:code blocks
Operating system: Windows
*/
#define MAX 10
#include <stdio.h>

typedef struct student  //student structure defined and typedef to stud
{
    char name[50];
    char surname[20];
    char gender[20];
    float marks;
}stud;

void input(stud a[],int n) //function take input all the datas
{
    int i;
    printf("Enter the student details : \n");
    for (i=0;i<n;i++)
    {
        scanf("%s",a[i].name);
        scanf("%s",a[i].surname);
        scanf("%s",a[i].gender);
        scanf("%f",&a[i].marks);
    }
    printf("\n");
}

void output(stud a[],int n) //function to print the datas
{
    int i;
    printf("Printing the student records..\n\n");
    for (i=0;i<n;i++)
    {
        printf("%s ",a[i].name);
        printf("%s ",a[i].surname);
        printf("%s ",a[i].gender);
        printf("%f\n",a[i].marks);
    }
}

void best(stud a[],int n) //function to check the girl student who got the most marks
{
    int i,x;
    float max;
    max=a[0].marks;
    for (i=0;i<n;i++)
    {
        if ((a[i].marks>max) && ((a[i].gender[0]=='g') || (a[i].gender[0]=='G'))) //checking if he/she is a girl with max marks
        {
            max=a[i].marks;
            x=i;
        }
    }
    printf("\nBest Girl Student is : %s %s",a[x].name,a[x].surname); //printing name of the best girl
}

int main()
{
    int n;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    stud a[MAX];
    input(a,n);
    output(a,n);
    best(a,n);

    return 0;
}

