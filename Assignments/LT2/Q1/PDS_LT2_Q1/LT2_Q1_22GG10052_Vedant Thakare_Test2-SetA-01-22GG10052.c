/*
* Section 2
* Roll no : 22GG10052
* Name : Vedant Thakare
* Lab Test 2
* Description : Finding mean using recursive function
*
*/
#include<stdio.h>
float mean(int *a,int n)
{
    if(n==0)
        return ;
    return a[n-1]+mean(a,n-1);
}
int main()
{
    int n,i;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("List = ");
    for(i=0;i<n-1;i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("%d\n",arr[n-1]);
    printf("Mean = %f",mean(arr,n)/n);
    return 0;
}
