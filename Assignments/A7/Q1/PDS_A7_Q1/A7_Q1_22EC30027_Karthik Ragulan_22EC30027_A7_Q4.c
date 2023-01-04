#include<stdio.h>
int main()
{
int arr[100];
int n,num;
printf("enter the size of the array");
scanf("%d",&n);
printf("enter the elements into the array is ascending order");
for(int i=0;i<n+1;i++)
	scanf("%d",arr[i]);
printf("enter the number to be inserted into the array");
scanf("%d",&num);
for(int j=0;j<n;j++)
    if(arr[j]>arr[j-1]&&arr[j]<arr[j+1])
	return 0;
}
