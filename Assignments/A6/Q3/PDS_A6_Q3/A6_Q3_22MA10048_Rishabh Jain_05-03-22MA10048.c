#include <stdio.h>


void swap(int *p, int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
}

void reverse(int *a, int s, int e)
{
    if(s>=e) return;

    int temp;
    temp=a[s];
    a[s]=a[e];
    a[e]=temp;
    reverse(a,s+1,e-1);



}
void cyclicShift(int *a, int direction, int n)
{
    if (direction==1)
    {
        if(n==1)
        {
            return;
        }
        else
        {
            swap(&a[0],&a[1]);
        }
        cyclicShift(a,1,n-1);
    }
    else
    {
        if (n==1)
        {
            return;
        }
        else
        {
            swap(&a[n-2],&a[n-1]);
        }
        cyclicShift(a,direction,n-1);
    }
}




int main()
{
    int n, direction;
    printf("Enter the size of the array and direction: ");
    scanf("%d %d",&n,&direction);
    int a[n];
    printf("Enter %d integers: \n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Original Array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }


    reverse(*a,0,n-1);

    printf("Reversed Array: ");
    for(int j=0;j<n;j++)
    {
        printf("%d ",a[j]);
    }

    cyclicShift(*a,direction,n);
    if (direction==1)
    {
      printf("Array after left cyclic shift: ");
    }
    else
    {
      printf("Array after right cyclic shift: ");
    }
    for(int k=0;k<n;k++)
    {
        printf("%d ",a[k]);
    }
}






