/*

Section 14

Roll no : 22CE10065

Name : Saloni Shaw

Assignment 8

Description - Program to print saddle points

*/

#include <stdio.h>

int main ()
{
int a[3][3];
int i,r,c,flag,j,max,min,p,q;//initializing
printf("enter the shape of array\n");//to enter the shape of the array
scanf("%d,%d",&r,&c);
printf("enter the array elements\n");//to enter the elements of array
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
scanf("%d ",&a[i][j]);
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
max=min=a[i][j];
for(p=0;p<c;p++)
{
if(a[i][p]<min)
min=a[i][p];//minimum checking
}
for(q=0;q<r;q++)
{
if(a[q][j]>max)
max=a[q][j];//maximum checking
}
}
}
if(max==min)
{
printf("The saddle point is %d \n",a[i][j]);//printing the saddle points
flag=1;
}

if(flag==0)
printf("There is no saddle point in this 2D array");
}//end of program

