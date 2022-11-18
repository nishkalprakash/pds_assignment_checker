/*
Name: Indra Kumar Gupta
Roll: 21AE10043
Department: Aerospace Engineering
Package: CodeBlocks
Operating system: Windows
*/

//Lab Test 2 Question 1

#include <stdio.h>

int main()
{


  int n,sum=0,k=0,max,num,d;
    printf("Enter n : ");
    scanf("%d",&n);
    d=n*2;
    int a[n],b[d];
    printf("Enter elements : ");
    for(int i=0;i<n;i++)             //to store elements
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
            b[k]=a[i]+a[i+1];
            k++;
    }
    for(int i=0;i<n-2;i++)
    {
       b[k]=a[i]+a[i+1]+a[i+2];
        k++;
    }
    for(int i=0;i<n-3;i++)
    {
        b[k]=a[i]+a[i+1]+a[i+2]+a[i+3];
        k++;
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    b[k]=sum;
    max=b[0];
    for(int i=0;i<=k;i++)
    {
        if(b[i]>max)
        {
            max=b[i];
        }
    }
    printf("largest sum = %d",max);

    return 0;
}
