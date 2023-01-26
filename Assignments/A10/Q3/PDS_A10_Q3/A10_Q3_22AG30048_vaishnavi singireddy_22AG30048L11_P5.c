#include<stdio.h>
int main()
{
int a[100],i,n,j,max=0,min=2560;
printf("enter the size of array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("elements are....");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
for(i=0;i<n;i++)
{
if(max<a[i])
{
max=a[i];
}
}
printf("\nmaximum number is:%d\n",max);
for(i=0;i<n;i++)
{
if(min>a[i])
{
min=a[i];
}
}
printf("\nminimum number is:%d\n",min);
}

