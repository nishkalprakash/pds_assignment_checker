/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Assignment No : 7
* Description : Program to sort an existing array with a new input value
*/
#include<stdio.h>

int main()
{
int n,i,j,temp;
scanf("%d",&n);
int x[n], k;

for(k=0;k<=n-1; k++)
{
scanf("%d", &x[k]);
}
 
for(i=0;i<=n-1; i++)
{   
 for(j=i+1;j<n; j++)
{
if(x[i]>x[j]){
temp= x[i];
x[i]=x[j];
x[j]=temp;
}
}
}
printf("output array:");
for(k=0;k<=n-1; k++)
{
printf("%d", x[k]);
}
return 0;
}
