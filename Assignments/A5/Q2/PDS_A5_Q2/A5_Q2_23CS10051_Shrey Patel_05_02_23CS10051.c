//Shrey Patel
//23CS10051

#include <stdio.h>
#include <stdlib.h>
int main()
{
int a[50],b,c,d,n;
printf("Enter the number of values as input");
scanf("%d",&n);
for(int i=0;i<n;i++)
{a[i]=rand()%41+10;
printf("%d\t",a[i]);}

for(int i=0;i<n;i++)
{

for(int j=1+i;j<n;j++)
{
for(int k=j+1;k<n;k++)
if((a[i]+a[j]+a[k])==60)
{printf("Indices:%d %d %d \n Values %d %d %d \n",i,j,k,a[i],a[j],a[k]);
}}}}
