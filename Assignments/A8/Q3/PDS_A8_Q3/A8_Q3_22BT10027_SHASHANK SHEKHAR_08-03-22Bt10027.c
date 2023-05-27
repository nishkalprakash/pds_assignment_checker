#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char RollNo[10];
    float marks[3];
    float total;
};
int main()
{
    int n,tot=0;
    printf("Enter the number of students \n");
    scanf("%d",&n);
    struct student a[n];
    for(int i = 0;i<n;i++)
    {
        tot = 0;
        printf("Enter the roll\n");
        scanf("%s", a[i].RollNo);
        printf("Enter the marks\n");
        for(int j=0;j<3;j++)
        {
            scanf("%f",&a[i].marks[j]);
            tot += a[i].marks[j];
        }
        a[i].total = tot;
    }
    printf("Student Records <original sequence>");
    for(int i = 0;i<n;i++)
    {
        printf("Roll No. %s\n",a[i].RollNo);
        printf("Marks: %0.2f %0.2f %0.2f \n",a[i].marks[0],a[i].marks[1],a[i].marks[2]);
        printf("Total: %0.2f \n",a[i].total);

    }
    for(int i=0;i<n;i++)//Bubble sort
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j].total<a[j+1].total)
            {
                int temp;
                char r[10];
                temp = a[j].total;
                a[j].total = a[j+1].total;
                a[j+1].total = temp;
                temp = a[j].marks[0];
                a[j].marks[0] = a[j+1].marks[0];
                a[j+1].marks[0] = temp;
                temp = a[j].marks[1];
                a[j].marks[1] = a[j+1].marks[1];
                a[j+1].marks[1] = temp;
                temp = a[j].marks[2];
                a[j].marks[2] = a[j+1].marks[2];
                a[j+1].marks[2] = temp;
                strcpy(r,a[j].RollNo);
                strcpy(a[j].RollNo,a[j+1].RollNo);
                strcpy(a[j+1].RollNo,r);
            }
        }
    }
    printf("Sorted Students Records\n");
    printf("Students Records\n");
    for(int i = 0;i<n;i++)
    {
        printf("Roll No. %s\n",a[i].RollNo);
        printf("Marks: %0.2f %0.2f %0.2f \n",a[i].marks[0],a[i].marks[1],a[i].marks[2]);
        printf("Total: %0.2f \n",a[i].total);

    }
}
