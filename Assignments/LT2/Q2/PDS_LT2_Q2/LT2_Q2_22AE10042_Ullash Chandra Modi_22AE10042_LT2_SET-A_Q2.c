/*
Name : Ullash chandra Modi
Roll : 22AE10042
sec : 2
assignment : 2
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct record{
char rollno[10];
char branch[2];
char dob[5]
int year;
}r;

int main()
{
    int n,i,y;
    printf("enter number of elements you want to enter : ");
    scanf("%d",&n);

    if ((n<0)||(n>100))
        printf("invalid value of n .");
    else
    {
        r *a[n];
        for (i=0;i<=n;i++)
        {
            a[i]=(r *)malloc(n*sizeof(r));
        }
        printf("enter %d inputs -\n",n);
        for (i=0;i<n;i++)
        {
            scanf("%s %s %s/%d",&a[i]->rollno,&a[i]->branch,&a[i]->dob,&a[i]->year);
        }

        printf("\n enter year : ");
        scanf("%d",&y);

        for (i=0;i<n;i++)
        {
            printf("%s %s %s/%d",a[i]->rollno,a[i]->branch,a[i]->dob,a[i]->year);
        }


        for (i=0;i<n;i++)
        {
            if (y>(a[i]->year))
            {
                printf("Deleted records : %s %s %s/%d",a[i]->rollno,a[i]->branch,a[i]->dob,a[i]->year);
            }

        }

    }

    return 0;
}
