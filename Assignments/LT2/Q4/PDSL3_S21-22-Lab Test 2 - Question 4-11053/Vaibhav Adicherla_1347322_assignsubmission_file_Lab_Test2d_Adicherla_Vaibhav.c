/* name: Adicherla Vaibhav
Roll no.:21BT10002
Department: Biotechnology and Biochemistry Btech4yrs
Package:code blocks
Operating system: Windows*/
#include<stdio.h>

#define MAX macro

struct student // defining structure
{
    char stud_name[50];  // variables definition
    char stud_gender[10];
    float stud_marks;
}arr[],x;

void main() // function
{
    int n,max;// number of students and max marks
    printf("Enter the number of students:");// printing number of students
    scanf("%d",&n);
    struct student arr[n];// using the structure
    printf("Enter the student details: \n");// printing the details of students
    for (int i =0;i<n;i++)
    {

        scanf("%s %s %f", arr[i].stud_name, arr[i].stud_gender, arr[i].stud_marks);


    }


    printf("\n\t name \tgender\tmarks\t\n");// printing the details of students
    for (int i=0;i<n;++i)
       {

        printf("\t%s\t%d\t%.2f\t\n", arr[i].stud_name, arr[i].stud_gender, arr[i].stud_marks);
       }
          return 0;
}
