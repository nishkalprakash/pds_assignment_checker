/*
Section 2
Roll No : 22CS30036
Name : Lakshya Agrawal
Assignment No : 8
Description : Structure to store data
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Student{
   char RollNo[10];
   float marks[3];
   float total;
}Student;

void read_and_store_data(Student *arr,int n)
{
    float total = 0;
    for(int i=0;i<n;i++)
    {
        total = 0;
        scanf("%s%f%f%f",arr[i].RollNo,&(arr[i].marks[0]),&(arr[i].marks[1]),&(arr[i].marks[2]));
        total+=(arr[i].marks[0])+(arr[i].marks[1])+(arr[i].marks[2]);
        arr[i].total = total;
    }
}

void print_records(Student *arr,int n)
{
    for(int i=0;i<n;i++)
        printf("\nRoll No: %s\nMarks: %.2f %.2f %.2f\nTotal: %.2f\n",arr[i].RollNo,arr[i].marks[0],arr[i].marks[1],arr[i].marks[2],arr[i].total);
}

void sort_records(Student *arr,int n)
{
    Student temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-i-1);j++)
        {
            if(arr[j].total < arr[j+1].total)
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter the number of students : ");
    scanf("%d",&n);

    Student *arr = (Student*)malloc(n*sizeof(Student));
    printf("\nEnter the data for %d students : \n",n);
    read_and_store_data(arr,n);

    printf("\nStudent Records:\n");
    print_records(arr,n);

    printf("\nSorted Student Records:\n");
    printf("Student Records:\n");
    sort_records(arr,n);
    print_records(arr,n);

    return 0;
}
