/*
Section 2
Roll No. - 22CS30016
Name - Omkar Vijay Bhandare
Assignment No. - 08
Description -
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
    char RollNo[10];
    float marks[3];
    float total;
} student;

void bubble_sort(student *list, int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(list[j].total<list[j+1].total)
            {
                student temp;
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}
int main()
{
    int n;
    printf("Enter the number of students : ");
    scanf("%d", &n);

    student *list = (student *)malloc(n*sizeof(student));

    for(int i=0; i<n; i++)
    {
        scanf("%s%f%f%f", list[i].RollNo, &list[i].marks[0], &list[i].marks[1], &list[i].marks[2]);
    }

    for(int i=0; i<n; i++)
    {
        list[i].total  = list[i].marks[0] + list[i].marks[1] + list[i].marks[2];
    }

    printf("Student Records : \n");
    for(int i=0; i<n; i++)
    {
        printf("Roll No : %s\n", list[i].RollNo);
        printf("Marks : %.2f  %.2f  %.2f\n", list[i].marks[0], list[i].marks[1], list[i].marks[2]);
        printf("Total : %.2f\n", list[i].total);
    }
    printf("\n");

    bubble_sort(list,n);

    printf("Sorted Student Records: \n");
    printf("Student Records : \n");
    for(int i=0; i<n; i++)
    {
        printf("Roll No : %s\n", list[i].RollNo);
        printf("Marks : %.2f  %.2f  %.2f\n", list[i].marks[0], list[i].marks[1], list[i].marks[2]);
        printf("Total : %.2f\n", list[i].total);
    }
    printf("\n");

    return 0;
}
