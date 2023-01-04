#include <stdio.h>
int main()
{
int l;
printf("enter the length\n");
scanf("%d",&l);
int arr[l];
int i,j;
printf("enter the lements of the array");
for(i=0;i<l;i++)
scanf("%d",&arr[i]);
printf("enter the value of m\n");
int m,count=0;
scanf("%d",&m);
int max=arr[0],min=arr[0];
for(i=0;i<l;i++)
{
if(max<arr[i])
max = arr[i];
if(min>arr[i])
min = arr[i];
}

for(i=min;i<=max;i++)
{
count =0;
for(j=0;j<l;j++)
{
if(arr[j]==i)
count++;
}
if(count==m)
{
printf("%d appears %d number of times",i,m);
printf("\n");
}
return 0;
}

