/*
Section 2
Roll no. 22EE30015
Name : Keshav Prajapati
Assignment No. 8
Description : Student records and sorting
*/

#include<stdio.h>

typedef struct Student {
    char RollNo[10];
    float marks[3];
    float total;
} stud;

void swap (stud *p, stud *q)
{
    stud temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int n;

    printf("Enter the number of students whose data you want to store : ");
    scanf("%d", &n);

    stud student[n];

    for(int i = 0; i < n; i++)
    {
        printf("Roll No : ");
        scanf("%s", student[i].RollNo);
        printf("Enter Marks in 3 Subjects :");
        printf("\n");
        for(int j = 0; j < 3; j++)
        {
            scanf("%f", &student[i].marks[j]);
        }
    }

    //Calculating total marks
    for(int i = 0; i < n; i++)
    {
        student[i].total = 0;
        for(int j = 0; j < 3; j++)
        {
            student[i].total += student[i].marks[j];
        }
    }

    //Sorting
    for(int j = 0; j < n-1; j++)
    {
        for(int i = 0; i < n-1; i++)
        {
            if(student[i].total < student[i+1].total)
            {
                swap(&student[i], &student[i+1]);
            }

            else
                continue;
        }
    }

    //Printing
    printf("Sorted Student Records : \n");

    for(int i = 0; i < n; i++)
    {
        printf("Roll No : ");
        printf("%s", student[i].RollNo);
        printf("\n");
        printf("Marks in 3 Subjects :");
        for(int j = 0; j < 3; j++)
        {
            printf("%.2f ", student[i].marks[j]);
        }
        printf("\n");
        printf("Total : %f", student[i].total);
        printf("\n");
    }

    return 0;
}
