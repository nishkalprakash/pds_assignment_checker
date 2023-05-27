#include<stdio.h>
#include<math.h>

typedef struct
{
    char RollNo[10];
    float marks[3];
    float total;
} student;

int min_loc (student x[], int k, int size)
{
    int j,pos;
    pos = k;
    for (j=k+1; j<size; j++)
    {
        if (x[j].total<x[pos].total) pos = j;
    }
    return pos;
}

int sel_sort (student x[], int size)
{
    int k,m;
    student temp;

    for (k=0;k<size-1;k++)
    {
        m=min_loc(x,0,size-k);

        temp = x[size-k-1];
        x[size-k-1] = x[m];
        x[m] = temp;
    }
}

int main()
{
    int n,i;
    student a[100];

    scanf("%d",&n);
    for (i=0;i<n;++i)
    {
        scanf("%s %f %f %f",&a[i].RollNo,&a[i].marks[0],&a[i].marks[1],&a[i].marks[2]);
    }
    for (i=0;i<n;++i)
    {
        a[i].total = a[i].marks[0] + a[i].marks[1] + a[i].marks[2];
    }

    sel_sort(a,n);

    printf("\nStudent Records:\n<Print in the order read>\n\nSorted Student Records:\nStudent Records:\n");
    for(i=0;i<n;++i)
    {
        printf("Roll No: %s\n",a[i].RollNo);
        printf("Marks: %.2f %.2f %.2f\n",a[i].marks[0],a[i].marks[1],a[i].marks[2]);
        printf("Total: %.2f\n",a[i].total);
    }

    return 0;
}

