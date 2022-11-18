/*
Name: Shubham Singh
Roll No: 21EX10032
Department: Geology and Geophysics
Package: Codeblocks
Lab Test: 2(d)
*/

#include <stdio.h>
#define MAX=10
struct Student//structure to store student details
{
    char name1[10];//stores first name
    char name2[10];//stores last name
    char g[4];//stores gender
    float marks;//stores marks
};
int main()
{
    printf("Enter the number of students : ");
    int n;
    scanf("%d",&n);//accepting number of students
    printf("Enter the student details:\n");
    struct Student a[10];//structure array to store details of n students
    for(int i=0;i<n;i++)
        scanf("%s%s%s%f",a[i].name1,a[i].name2,a[i].g,&a[i].marks);//accepting inputs
    printf("\nStudent details received:\n");
    int max=-1;
    for(int i=0;i<n;i++)
    {
        printf("%s %s - %s - %f\n",a[i].name1,a[i].name2,a[i].g,a[i].marks);//printing student details
        if(a[i].g[0]=='g')//checking for girl
        {
            if(max==-1 || a[i].marks>a[max].marks)//checking marks
                max=i;//storing index of best girl
        }
    }
    printf("\nBest girl student : %s %s",a[max].name1,a[max].name2);//printing name of best girl
}
