/*
* Section 2
* Roll no : 22GG10052
* Name : Vedant Thakare
* Assignment : 5
* Description : Arranging the negative numbers first
*/
#include<stdio.h>
#define N 100
int main ()

{
    int n,i,j,temp;
    int arr[N];
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    //if value of n is greater than it is an error
    if (n>N)
    {
        printf("Error");
    }
    else
    {
    printf("Enter the elements\n");
    //Storing input values in array
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("Original array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    //Below program is for rearrangement of terms
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            //Rearranging only if both their product is less than 0
            if((arr[j+1]<arr[j])&&(((arr[j+1]*arr[j])<0)))
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\n");
    printf("Rearranged array :");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    }

    return 0;
}
