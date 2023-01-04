#include<stdio.h>
int main()
{
int arr[50];
int n,m;
printf("enter array size");
scanf("%d" , &n);
printf("enter elements in ascending order");
for(int i=0;i<n+1;i++)
   scanf("%d" ,arr[i]);
printf("enter the number to be inserted");
scanf("%d" ,&m);
for(int j=0;j<n;j++)
    if(arr[j]>arr[j-1] && arr[j]<arr[j+1])
    printf("output array %d");
return 0;}
