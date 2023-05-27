/*Shreya Vadhavkar
22ME10091
Lab 8
Section 2
question 3*/
#include<stdio.h>
struct Student
{
    char RollNo[10];
    float marks[3];
    float total;
};
int main()
{
    int n;
    scanf("%d", &n);
    struct Student a[n];
    int i,j;
    for(i=0;i<n;++i)
    {
        scanf("%s",a[i].RollNo);
        for(j=0;j<3;++j)
        {
            scanf("%f",&a[i].marks[j]);
        }

    }
    for(i=0;i<n;++i)
    {
        a[i].total = 0;
        for(j=0;j<3;++j)
        {
            a[i].total+=a[i].marks[j];
        }
    }
    printf("Students Records:\n");
    for(i=0;i<n;++i)
    {
        printf("Roll No: %s\n",a[i].RollNo);
        printf("Marks: ");
        for(j=0;j<3;++j)
        {
            printf("%.2f ",a[i].marks[j]);
        }
        printf("\nTotal: %.2f\n",a[i].total);
    }
    printf("Sorted Students Records:\n");
    printf("Student Records:\n");
    for(i=0;i<n-1;++i)
    {
        for(j=i+1;j<n;++j)
        {
            if(a[i].total<a[j].total)
            {
                struct Student temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;++i)
    {
        printf("Roll No: %s\n",a[i].RollNo);
        printf("Marks: ");
        for(j=0;j<3;++j)
        {
            printf("%.2f ",a[i].marks[j]);
        }
        printf("\nTotal: %.2f\n",a[i].total);
    }
    return 0;
}

