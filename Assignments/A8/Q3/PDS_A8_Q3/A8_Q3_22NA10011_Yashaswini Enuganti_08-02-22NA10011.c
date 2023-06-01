#include<stdio.h>
typedef struct student{
    char rollno[10];
    float marks[3];
    float total;
    }student;
int main(){
    int n,i,j;
    float tot=0;

    printf("enter the number of students:");
    scanf("%d",&n);
    struct student stu[n];
    for(i=0;i<n;i++)
    {
        scanf("%s",&stu[i].rollno);
        printf("Enter the marks of student %d in 3 subjects",i);
        for(j=0;j<3;j++)
        {
            scanf("%f",&stu[i].marks[j]);

        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s",stu[i].rollno);
        printf("\nEnter the marks of student %d in 3 subjects",i);
        for(j=0;j<3;j++)
        {
            printf("%f",stu[i].marks[j]);
            tot=tot+stu[i].marks[j];
        }
        printf("\ntotal marks of student %d=%f",i,tot);
        tot=0;

    }
}
