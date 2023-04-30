/*
section 2
roll no:-22EE10056
Name:-rushikesh santosh jadhav
assignment no:-5
Description:-*/
#include<stdio.h>
int n;
void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    return;
}
void cyclicShift(int *a,int k)
{
    static int j=0,temp;

    if(k==1)
    {
         if(j==n-1)
        {
            return;
        }
        else
        {
        swap(&a[j],&a[j+1]);
        j++;
        cyclicShift(a,1);
        }
    }
    else
    {
       if(j==0)
       {
           temp=a[j+1];
           a[j+1]=a[j];
           j=j+2;
           cyclicShift(a,2);
       }
       else if(j==n-1)
       {
           swap(&a[n-1],&a[0]);
           a[j]=temp;
           return;
       }
       else
       {
           swap(&a[j],&temp);
           j++;
           cyclicShift(a,2);
       }

    }
    return 0;
}
void reverse(int *a)
{
    static int i=0;
    if(i==(n/2)-1)
    {
        swap(&a[i],&a[n-1-i]);
        return;
    }
    else
    {
        swap(&a[i],&a[n-1-i]);
        i++;
        reverse(a);
    }
    return;
}
int main()
{
    int k;
    printf("Enter size of array and direction:");
    scanf("%d %d",&n,&k);
    int a[n],i;
    printf("Enter %d numbers:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Original array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    reverse(a);
    printf("Reversed array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    cyclicShift(a,k);
    if(k==1)
    {
        printf("Array after left cyclic shift:");
        for(i=0;i<n;i++)
        {
        printf("%d ",a[i]);
        }
    }
    else
    {
        printf("Array after right cyclic shift:");
        for(i=0;i<n;i++)
        {
        printf("%d ",a[i]);
        }
    }

    return 0;
}
