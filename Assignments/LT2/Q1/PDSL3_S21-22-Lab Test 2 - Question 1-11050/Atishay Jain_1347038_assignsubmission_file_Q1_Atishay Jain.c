#include<stdio.h>
void main()
{
    int n,s=0,b,i,j,k,max;
    printf("Enter n:");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=largest(a,n); //initializing max with largest entry
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {   s=0;
          for(k=i;k<=j;k++)//extracting sub arrays from array
                s=s+a[k];//adding elements
        }
        if(s>=max)//comparing maximum values
        {   max=s;
            printf("The sub array/s is[");
             for(b=i;b<j;b++)
                printf("%d ",a[b]);//printing sub array
            printf("]");
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==max)
            printf(" or %d",max);//printing another possible sub array
    }
      printf("\nLargest sum is %d",max);
       getch();
}
int largest(int A[],int N)//function to find largest entry
{
    int i,large;
     for (i=0;i<=N-1;i++)
    {
        if(A[0]>A[i])
            large=A[0];
        else
            large=A[i];
    }
    return large;
}
