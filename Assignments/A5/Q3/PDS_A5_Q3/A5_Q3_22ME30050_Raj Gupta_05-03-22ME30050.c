#include <stdio.h>
#include <math.h>





void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void reverse(int *a,int p,int i)
{
    if (p<i) return;
    swap(&a[p],&a[i]);
    reverse(a,p-1,i+1);
}

void cyclicshift()
{

}

int main()
{
    int n,d;
    printf("enter the size of array and direction : ");
    scanf("%d %d",&n,&d);
    printf("enter the %d numbers : ",n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    reverse(a,n-1,0);
    printf("array after reverse : ");
    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }


    return 0;

}
