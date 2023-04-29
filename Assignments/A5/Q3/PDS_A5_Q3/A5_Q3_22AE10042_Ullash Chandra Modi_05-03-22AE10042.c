/*
*Section 2
*Roll no- 22AE10042
*Name- Ullash Chandra Modi
*Assignment no- 3
*/
#include <stdio.h>
void reverse(int *a);
void cyclicshift(int *a,int direction);
void swap(int *p,int *q);

int n,i;
int main ()
{
    int d;
    printf("Enter the size of array and direction : ");
    scanf("%d %d",&n,&d);
    int a[n];
    printf("enter %d integers : \n",n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nOriginal Array : ");
    for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    reverse(&a);
    printf("\nArray after reverse : ");
    for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    if (d==1)
    {
        cyclicshift(&a,1);
        printf("Array after left cyclic shift : ");
        for (i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
    }
    else
    {
        cyclicshift(&a,-1);
        printf("Array after right cyclic shift : ");
        for (i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
    }

    return 0;
}

void swap(int *p,int *q)
{
    int a;
    a=*p;
    *p=*q;
    *q=a;
    return;
}

void reverse(int *a)
{
    for (i=0;i<=(n/2);i++)
    {
        swap(&a[i],&a[n-1-i]);
    }
}

void cyclicshift(int *a,int direction)
{
    int b,k;
    if (direction==1)
    {
        b=a[0];
        for (k=0;k<n-2;k++)
        {
            a[k]=a[k+1];
        }
        a[n-1]=b;
    }
    else
    {
        b=a[n-1];
        for (k=n-1;k>1;k--)
        {
            a[k]=a[k-1];
        }
        a[0]=b;
    }

}

