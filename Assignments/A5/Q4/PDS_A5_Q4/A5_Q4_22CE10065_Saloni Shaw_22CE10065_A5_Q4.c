/*
Section 14
Roll no : 22CE10065
Name : Saloni Shaw
Assignment 5
Description - Program for bins
*/
#include <stdio.h>
int bran,n,max,min,b;//variables
void classify(int i, int s)
{
int u,l,c=0,j;
l=min+(i-1)*bran;
u=min+i*bran;
printf("bin%d->");//printing 
if(i==b)
{u=max;
else
u=min+i*bran;
for(j=0;j<n,j++)
{
if((s[j]>=l) && (s[j]>=u))
{
printf("%d",s[j]);
c=c+1;//increasing counter by 1
}
}
printf("elements=%d\n",count);

int main()//main function
{
int n,i,j,b,max,min;
int a[20];
printf ("enter total number of elements \n");//entering total number of elements
for(i=0;i<n;i++)
scanf("%d", &a[i]);
if("enter the numbrs of bins \n");// to input the number of bins
scanf("%d",&b);
max=a[0];
min=a[0];
for(j=0;j<n;j++)
{
if(a[j]>max)
max=a[j];//maximum value
if(a[j]<min)
min=a[j];//minimum value
}
bran=(max-min+1)/b;
for(k=1;k<=b;k++)
{
classify(k,a);
return 0;
}
//end of program

