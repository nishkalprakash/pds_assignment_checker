/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 8
Description : Saddle point in 2-D array
*/
#include<stdio.h>
int main()
{
int i,temp=0,j,k,minimum=10000000,maximum=0;
printf("Shape of the array is \n");
scanf("%d %d",&i,&j);
int arr[i][j]; //array declaration
printf("Enter elements \n");
for(int m=0;m<i;m++)
{
for(int n=0;n<j;n++)
{
scanf("%d",&arr[m][n]);
}
}
for(int m=0;m<i;m++)
{
for(int n=0;n<j;n++)
{
if(arr[m][n]<minimum) //to find minimum element in a row
{
minimum=arr[m][n]; 
k=n;
}
}
for(int l=0;l<i;l++)
{
if(arr[l][k]>maximum) //to find maximum element in a row
maximum=arr[l][k];
}
if(minimum==maximum)
{
temp=1;
printf("The saddle point is %d",minimum);
}
minimum=100000000;
maximum=0;
}
if(temp==0)
{
printf("There is no saddle point");
}
return 0;
}
