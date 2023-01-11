#include<stdio.h>
int main()
{
int arr[10];
int n,count=0;
printf("Enter the size of required array");
scanf("%d", &n);
if(n>10)
printf("enter size less than 10");
for(int i=0;i<n;i++)
scanf("%d", &arr[i]);
for(int j=1;j<n-1;j++)
if(arr[j]>arr[j-1]||arr[j]<arr[j+1])
count++;
printf("Out of order : %d",count);
return 0;
}
