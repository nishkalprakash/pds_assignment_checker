/*
Name:Chandrabali Biswas
Roll No:22EC30015
Section:2
Problem 3
Description: Student Records
*/
#include <stdio.h>   //Header files
#include <string.h>
typedef struct Student{   //defining data type student
    char RollNo[10];
    float marks[3];
    float total;
}student;

int main()
{
    int n;
    student temp;
    printf("Enter number of students:");  //input from user
    scanf("%d",&n);
    student* ptr;
    ptr = (student*)malloc(n*sizeof(student));
    for(int i=0;i<n;i++)
    {
       printf("\nFor student %d:\nEnter roll no:\n",i+1);
       scanf("%s",&ptr[i].RollNo);
       printf("Enter marks in 3 subjects:");
       for(int j=0;j<3;j++)
       {
           scanf("%f",&ptr[i].marks[j]);
       }
       ptr[i].total = ptr[i].marks[0]+ptr[i].marks[1]+ptr[i].marks[2];
    }
    printf("Student Records:\n");
    for(int i=0;i<n;i++)  //prints roll no,marks and total for each student
    {
        printf("Roll No:%s\n",ptr[i].RollNo);
        printf("Marks:%f %f %f\n",ptr[i].marks[0],ptr[i].marks[1],ptr[i].marks[2]);
        printf("Total:%f\n",ptr[i].total);
    }

   for(int i=0;i<n;i++)  //bubble sort
    {
        for(int j=i+1;j<n;j++)
        {
            if(ptr[i].total<ptr[j].total)
            {
                temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
                }
            }
        }


    printf("Sorted Student Records:\n");
    for(int i=0;i<n;i++)    //sorted student records
    {
        printf("Roll No:%s\n",ptr[i].RollNo);
        printf("Marks:%f %f %f\n",ptr[i].marks[0],ptr[i].marks[1],ptr[i].marks[2]);
        printf("Total:%f\n",ptr[i].total);
    }

  return 0;   //end

}
