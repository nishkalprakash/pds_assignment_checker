#include <stdio.h>
#include <stdlib.h>
typedef struct Student{     //structure declaration
    char RollNo[10];
    float marks[3];
    float total;
}student;

void main()
{
    student *a,t;
    int n,i,j;

    printf("enter number of students: \n");     //dynamic memory allocation
    scanf("%d",&n);
    a=(student *)malloc(n*sizeof(student));
    for(i=0;i<n;i++)
    {
        printf("enter roll number of student %d  ",(i+1));
        scanf("%s",a[i].RollNo);
        printf("enter marks in 3 subject of student %d: ",(i+1));
        scanf("%f%f%f",&a[i].marks[0],&a[i].marks[1],&a[i].marks[2]);
    }
    for(i=0;i<n;i++)
    {
        a[i].total=a[i].marks[0]+a[i].marks[1]+a[i].marks[2];
    }
    printf("\n entered records:  \n");
    for(i=0;i<n;i++)
    {
        printf("\n Roll num= %s",a[i].RollNo);
        printf("\nmarks= %f,%f,%f",a[i].marks[0],a[i].marks[1],a[i].marks[2]);
        printf("\n total= %f",a[i].total);
        printf("\n");
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j].total<a[j+1].total)     //bubble sort
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("\n sorted records:  \n");
    for(i=0;i<n;i++)
    {
        printf("\n Roll num= %s",a[i].RollNo);
        printf("\nmarks= %f,%f,%f",a[i].marks[0],a[i].marks[1],a[i].marks[2]);
        printf("\n total= %f",a[i].total);
        printf("\n");
    }

}
