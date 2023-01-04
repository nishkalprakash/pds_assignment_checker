#include<stdio.h>
int main()
{
int arr[100],rrr[100];
int n,num,count=0;
printf("enter the size of the array you want to create");
scanf("%d",&n);
if(n>100)
	printf("enter less that 100 elements into the array");
for(int i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
printf("enter the element to find its occurence");
scanf("%d",&num);
for(int j=0;j<n;j++)
{
if(num==arr[j])
count=count+1;
}
printf("%d appears %d times",num,count);
return 0;
}

