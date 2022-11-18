/*
Name:Lohitava Ghosh
Roll no.:21AE10023
Department:Aerospace Engg Btech.
Package:code blocks
Operating system: Windows
*/

#include <stdio.h>
#include <stdlib.h>

void bin(int a[],int n,int d)
{
    int **arr;
    arr = (int **)malloc(d*sizeof(int *));
    int i,j,k,e,s,p,c=0,x=0,y=0,b[d];
    int max=a[0],min=a[0];
    for (i=0;i<n;i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
    }
    for (i=0;i<n;i++)
    {
        if (min>a[i])
        {
            min=a[i];
        }
    }
    p=max-min+1;
    s=min;
    e=min+p/d-1;
    for (i=0;i<n;i++)
    {
        if ((a[i]>s) && (a[i]<e))
        {
            c=c+1;
        }
        if (i==n-1)
        {
            b[y++]=c;
            arr[x++] = (int *)malloc(c*sizeof(int));
            if (s!=n)
            {
                i=0;
                s=e+1;
                e=e+(p/d-1);
            }
        }
    }
    y=0;
    s=min;
    e=min+p/d-1;
    for (i=0;i<d;i++)
    {
        j=0;
        for (k=0;k<n;k++)
        {
            if ((a[i]>s) && (a[i]<e))
            {
                arr[i][j++]=a[i];
            }
        }
        s=e+1;
        e=e+(p/d-1);
    }

    for (i=0;i<d;i++)
    {
        printf("bin%d->",i+1);
        for (j=0;j<b[y++];j++)
        {
            printf("%d,",arr[i][j]);
        }
        printf(" Number of elements in bin%d = %d\n",i+1,b[y]);
    }
}

int main()
{
    int n,d,*a,i,j,y=0;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    a = (int *)malloc(n * sizeof(int));
    printf("Enter array elements : ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number of bins : ");
    scanf("%d",&d);
    bin(a,n,d);

    return 0;
}
