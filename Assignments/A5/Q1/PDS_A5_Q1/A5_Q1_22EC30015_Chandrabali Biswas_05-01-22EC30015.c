/*
Section :2
Roll No:22EC30015
Name: Chandrabali Biswas
Assignment No:5
Description: Rearrangement of array
*/
#include <stdio.h>
#define N 100
int main()    //main function
{
    int n,a[N];   //declaring variables and the array
    printf("Enter the number of elements:");
    scanf("%d",&n);   //taking input from user
    if(n>100)   //checks if number of elements is greater than 100
        printf("Error : n > 100");
    else
    {
        printf("Enter the elements:");
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);  //stores elements of the array
        printf("Original Array:");
        for(int i=0;i<n;i++)
            printf("%d ",a[i]);   //prints the original array
        printf("\nRearranged Array:");
        for(int i=0;i<n;i++)    //prints the modified array
            if(a[i]<0)
            printf("%d ",a[i]);
        for(int i=0;i<n;i++)
            if(a[i]>=0)
            printf("%d ",a[i]);
    }
    return 0;     //end
}
