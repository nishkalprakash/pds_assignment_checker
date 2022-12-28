/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 6
Description : to merge two sorted arrays into one sorted array
*/
#include<stdio.h>
int main()
{
int c,n1,n2;
printf("Enter size of array A ");
scanf("%d",&n1);
int A[n1];
printf("Enter Values ");
for(int i=0;i<n1;i++)
{
scanf("%d",&A[i]);
}
printf("\nEnter size of array B ");
scanf("%d",&n2);
int B[n2];
int C[n1+n2];
printf("Enter Values ");
for(int i=0;i<n2;i++)
{
scanf("%d",&B[i]);
}
printf("A=");
for(int i=0;i<n1;i++)
{
printf(" %d",A[i]);
}
printf("\nB=");
for(int i=0;i<n2;i++)
{
printf(" %d",B[i]);
}
printf("\nC= ");
for(int i=0;i<n1;i++)
{
printf(" %d",A[i]);
}
for(int j=0;j<n2;j++)
{
printf(" %d",B[j]);
}
return 0;
}

