#include<stdio.h>
#include<stdlib.h>


struct student
{
    char RollNo[10];
    float marks[3];
    float total;
};

void swap (int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

/*void sort(int start, int end,(struct student)*a)
{
    int i, temp;
    float max=0;
    for(i=start;i<end;i++)
    {
        if((a+i)->total >max)
        {
            max= (a+i)->total;
            temp=i;
            swap(&(a+i)->total, &a->total);
        }
    }
    sort(start+1,end,record*a);
    return a;
}*/


int main()
{
    int n, i, j,k;
    struct student *record;
    printf("Enter number of student:");
    scanf("%d", &n);

    record = (struct student*) malloc (n*sizeof(struct student));

    for(i=0; i<n; i++)
    {
        scanf("%s", (record+i)->RollNo);
        record[i].total=0;
        for(j=0; j<3; j++)
        {
            scanf("%f", &record[i].marks[j]);
            record[i].total += record[i].marks[j];
        }
    }

    printf("Students records:\n<Print in order read>\n\n");
    printf("Sorted student records:\nStudent records:\n");



    for(i=0; i<n; i++)
    {
        printf("%s\n", (record+i)->RollNo);
        for(j=0; j<3; j++)
        {
            printf("%.2f ", record[i].marks[j]);
        }
        printf("\n");
        printf("%.2f\n", (record+i)->total);
    }
}

