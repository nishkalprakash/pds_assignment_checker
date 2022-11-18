/*
Name        : Basa Sreekar
Roll no.    : 21EE10024
Department  : Electrical Engineering
package     : code blocks
Lab Test_2
Question    : 4
*/

#include <stdio.h>
#define MAX 50

typedef struct {         // Declaring structure and defining members //
    char name[50] ;         // Using typedef makes the work simple here //
    char gender[5];
    float marks;
}Student;


void print(Student a[],int n)  // parameteres - array structure with student details and no.of students 'n' //
{
    static int i=0;        //static is used as this is a recursive form of printing the names //
    if(i==n) printf("\n"); //Terminating condition //
    else if(i<n)
    {
       printf("%s_%s -> %f \n",a[i].name,a[i].gender,a[i].marks); //printing present structure details of one element of array //
       i++; // Increamenting i for calling function and printing next details //
       print(a,n); //Recursive Call //
    }
}

void Best_stu(Student a[],int n)   // parameteres - array structure with student details and no.of students 'n' //
{
    int i,k;
    float max;
    max = a[0].marks ; // As a initial maximum mark //
    k=0;
    for(i=1;i<n;i++)
    {
        if(a[i].marks > max) //Checking or compaing the marks //
        {
            max = a[i].marks; //max - contains maximum marks //
            k = i; //Contains index of student with max. marks //
        }
    }

    printf(" \n Best %s student : %s  with %.2f marks ",a[k].gender,a[k].name,a[k].marks);   //printing //

}

int main()
{
    int i,n,k;
    float m;
    Student stu[MAX];
    printf(" Enter the number of students : ");
    scanf("%d",&n);                                 // Taking input of no.of students //
    printf(" Enter the student details: \n");

    for(i=0;i<n;i++) // Entering student details using iterative methods //
    {
        printf(" Name  : ");
        scanf("%s",stu[i].name); // name string //
        printf(" Gender -(boy/girl) : "); // boy /girl //
        scanf("%s",stu[i].gender); // gender string //
        printf(" Marks : ");
        scanf("%.2f",&stu[i].marks); // marks float value //
    }

    printf(" Printing the student records.. \n");
    print(stu,n); //calling print function //
    Best_stu(stu,n); //Next - calling Best_stu function //
    return 0;
}
