/*
Section 2
Name : Surla Navaneeth
Roll No : 22CS10077
Assignment : Finding Mean using Recursive function
*/
#include<stdio.h>
#include<stdlib.h>
float mean(int *a,int n)
{
    int i,sum=0;
    float mean;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    mean = sum/(n*1.0);
    return mean;
}


int main()
{
int n,i,j;
printf("Enter the value of n : ");
scanf("%d",&n);
int *a = (int*) malloc( n *sizeof(int));
printf("Enter the elements :\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("List : ");
for(j=0;j<n;j++)
{
    printf("%d ",a[j]);
}
printf("\nMean = %f",mean(a,n));
}
