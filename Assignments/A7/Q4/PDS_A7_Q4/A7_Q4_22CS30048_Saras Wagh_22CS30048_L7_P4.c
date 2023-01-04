#include<stdio.h>
int min(int a[],int i,int n)
{
int pos;
pos=i;
for(int j=pos+1;j<=n-1;j++)
{
if(a[pos]>=a[j])
{
pos=j;
}
}
return pos;
}
int main()
{
int n,j=0,l=0;
printf("Enter the size of array:\n");
scanf("%d",&n);
int arr[n],a[n],b[n];
printf("start entering the numbers:\n");
for(int i=0;i<=n-1;i++)
{
printf("Enter the element no.%d",i+1);
scanf("%d",&arr[i]);
m=arr[i];
while(arr[i]>0)
{
arr[i]=arr[i]/10;
k++;
}
if(k>1)
{
a[j]=arr[i];
}
else
{
b[l]=arr[i];
}
}
for(int i=0;i<=n-1;i++)
int m=min(a,i,


