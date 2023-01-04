#include <stdio.h>
int main()
{
int l,i,j,temp;
printf("entre the length of the array\n");
scanf("&d",%l);
int newnum = 0;
int arr[l];
printf("enter the elements\n");
for(i=0;i<l;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<l-1;i++)
{
for(j=0;j<l-i-1;j++)
{
if(arr[j]<arr[j+1])
temp = arr[j+1];
arr[j+1]=arr[j];
arr[j]=temp;
}
}
for(i=l-1;i>=0;i--)
{
newnum = newnum + arr[i]*pow(10,digitcount(newnum)-1);
}

