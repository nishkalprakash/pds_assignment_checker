/*
*Section 2
*Roll no- 22AE10042
*Name- Ullash Chandra Modi
*Assignment no- 3
*Description-structure to store data
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n,a,b,c,d,i,j;
    char roll[10];

    typedef struct Student {
    char rollno[10];
    float marks[3];
    float total;
    }student;

    printf("enter number of student data you want to enter : ");
    scanf("%d",&n);

    student s[n];

    for (i=0;i<n;i++)
    {
        scanf("%s %f %f %f",&s[i].rollno,&s[i].marks[0],&s[i].marks[1],&s[i].marks[2]);
    }

    for (i=0;i<n;i++)
    {
        s[i].total=s[i].marks[0]+s[i].marks[1]+s[i].marks[2];
    }

    for (i=1;i<n;i++)
    {
        for (j=i;j>0;j--)
        {
            if (s[j].total>s[j+1].total)
            {
                roll=s[j+1].rollno;
                a=s[j+1].marks[0];
                b=s[j+1].marks[1];
                c=s[j+1].marks[2];
                d=s[j+1].total;

                s[j+1].rollno=s[j].rollno;
                s[j+1].marks[0];=s[j].marks[0];
                s[j+1].marks[0];=s[j].marks[1];
                s[j+1].marks[0];=s[j].marks[2];
                s[j+1].total=s[j].total;

                s[j].rollno=roll;
                s[j].marks[0];=a;
                s[j].marks[0];=b;
                s[j].marks[0];=c;
                s[j].total=d;

            }
        }
    }

    for (i=0;i<n;i++)
    {
        printf("student records : \n");
        printf("rollno : %s\n",s[i].rollno);
        printf("marks : %f %f %f \n",s[i].marks[0],s[i].marks[1],s[i].marks[2]);
        printf("total : %f\n\n",s[i].total);
    }



    return 0;
}
