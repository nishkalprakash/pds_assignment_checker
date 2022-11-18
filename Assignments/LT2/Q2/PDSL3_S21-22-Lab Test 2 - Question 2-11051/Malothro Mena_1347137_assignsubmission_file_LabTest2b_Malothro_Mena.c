#include<stdio.h>

int main()
{
    int n,i,alpha;
    printf("Enter how many no of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter your numbers below :- \n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    alpha=arr[0];
    int j=1;
    while(j<n)
    {
       if(arr[j]%alpha==0)
       {
           j++;
       }
       else
       {
           alpha=arr[j]%alpha;
           i++;
       }
    }
    printf("\nmax value= %d ",alpha);
    return 0;
}
