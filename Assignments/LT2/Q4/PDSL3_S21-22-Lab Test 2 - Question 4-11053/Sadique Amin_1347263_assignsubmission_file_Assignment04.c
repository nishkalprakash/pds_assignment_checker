/*
Name: Sadique Amin
Roll Number: 21CE30027
Department: Civil Engineering
Package used: <stdio.h>, <stdlib.h>
Assignment Class: 6
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10000

void BestGirl();
int IsGirl(char str[]);
int ConvertStringToNumber(char str[]);

struct student
    {
        char name[100];                         //Name of the Students
        char gender[100];                       //Gender of the Student boy or girl
        char marks[100];                       //Marks of the Student
    }arr[MAX];

int n;
int main()
{
    printf("Enter the number of students:");
    scanf("%d",&n);
    printf("Enter the student details:\n");
    for(int i=0;i<n;i++)
    {
        char m[100]="";
        //fgets(arr[i].name, 100, stdin);
        scanf("%s", arr[i].name);
        scanf("%s", arr[i].gender);
        scanf("%s", arr[i].marks);
        //arr[i].marks = atoi(m);
        //scanf("%f",&c);
        printf("--------------------\n");
    }
    printf("Printing Students Records...\n");
    for(int i=0;i<n;i++)
    {
        printf("%s %s - %s\n",arr[i].name,arr[i].gender,arr[i].marks);
    }
    BestGirl();
    return 0;
}

void BestGirl()
{
    printf("Best girl student: ");
    int c;
    float max=0.0;
    for(int i=0;i<n;i++)
    {
        if(IsGirl(arr[i].gender)==1)           //**
        {
            int num=ConvertStringToNumber(arr[i].marks);
            if(num>max)
            {
                max=num;
                c=i;
            }
        }
    }
    printf("%s",arr[c].name);                  //**
    return;
}

int IsGirl(char str[])
{
    char s[4]="girl";
    int flag=1;
    for(int i=0;i<4;i++)
    {
        if(str[i]!=s[i])
        {
            flag=0;
        }
    }
    return flag;
}

int ConvertStringToNumber(char str[])
{
    int x = atoi(str);
    return x;
}