/*
* Section 2
* Roll No : 22EC10027
* Name : Chinta venkata nikhil reddy
* Assignment No : 5
* Description :arrays positive and negative integers arrangement
*question : 1
*/
#include<stdio.h>
#define N 100
int main(){
    int a[N],n,i,k=0,j,temp;
    printf("give the total no of elements : ");
    scanf("%d" , &n);
    printf("give the elements of the arrays : ");
    for(i=0;i<n;i++)
    {
        scanf("%d" , &a[i]);
    }
    printf("the original array is :");
    for(i=0;i<n;i++)
    {
        printf("%d " , a[i]);
    }

    {
        for(i=0;i<n;i++)
        {
            if(a[i]<0)
            {
                temp=a[i];
                for(j=i;j>k;j--)
                {
                    a[j]=a[j-1];
                }
                k++;
                a[k]=temp;
            }
        }

    }
  /* for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {

            a[k]=a[i];
            k++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            a[k]=a[i];
            k++;
        }
    }*/
    printf("the new array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d " , a[i]);
    }

    return 0;
}
