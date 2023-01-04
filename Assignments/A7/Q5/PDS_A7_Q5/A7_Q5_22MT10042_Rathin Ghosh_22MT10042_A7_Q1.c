/*
Name: Rathin Ghosh
Section 14
Roll No. : 22MT10042
Problem no. 5
*/
#include<stdio.h>
int main() //main function
{
int ar[10],k=0,c=0,i,j,n;
printf("Enter number of elements 0<n<=10 : ");  // number of elements is taken as input
scanf("%d",&n);
printf("Enter the 10 elements of the array : "); //elements of the array are taken
for(i=0;i<n;i++)
scanf("%d",&ar[i]);
for(i=0;i<n;i++)
{
if(i==0)          //condition is checked for the first array element
{
for(j=i+1;j<n;j++)
if (ar[j]<=ar[i]){
c=1;
break;
}
}
if(i==n-1)        //condition is checked for the last array element
{
for(j=0;j<n-1;j++)
if (ar[j]>=ar[i]){
c=1;
break;
}
}
if(i!=1 && i!=n-1)
{
for(j=0;j<i;j++)
{
if (ar[j]<=ar[i]){
c=1;
break;
}
}
for(j=i+1;j<n;j++)
{
if (ar[j]>=ar[i]){
c=1;
break;
}
}
}
if (c==1)
k++;    // counter variable which counts the number of 'Out of order elements'
}
printf("Out of order : %d",k);
return 0;
}
