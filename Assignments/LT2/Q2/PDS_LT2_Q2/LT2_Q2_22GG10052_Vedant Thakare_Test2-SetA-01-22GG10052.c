/*
* Section 2
* Roll no : 22GG10052
* Name : Vedant Thakare
* Lab Test 2
* Description : Finding mean using recursive function
*
*/
#include<stdio.h>
//function for calculating mean
float mean(int *a,int n)
{
    if(n==0)
        return ;
    //calling the function recursively for getting the sum of array elements
    return a[n-1]+mean(a,n-1);
}

int main()
{
    int n,i;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements\n");
    //taking input of the elements
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //printing the elements
    printf("List = ");
    for(i=0;i<n-1;i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("%d\n",arr[n-1]);
    //mean =sum/value of elements
    printf("Mean = %f",mean(arr,n)/n);
    return 0;
}
