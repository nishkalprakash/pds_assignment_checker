/*Name: Bimal gayali
roll-21MA10017
sec -3
question: Find the subarray of contiguous elements in array */
#include<stdio.h>
int findsubarray(int a[20],int n) // declare a function
{
int largestsum=0, actualsum=0;
for(int i=0;i<n;i++)
{
    actualsum+=a[20]; //condition for actual array elements sum
    if(actualsum<0)
        actualsum=0;
    else if(largestsum<actualsum)
        largestsum=actualsum;
}return largestsum;
}
int main()
{
int i,n;
int a[20];
printf("enter the values for n between 1 to 20");
scanf("%d",&n);
printf("Enter the values for a[n] \n");
for(i=0;i<n;i++);
    scanf("%d",&a[i]); //enter the values for array


int largestsum=findsubarray(a[20],n);
return 0;
}

