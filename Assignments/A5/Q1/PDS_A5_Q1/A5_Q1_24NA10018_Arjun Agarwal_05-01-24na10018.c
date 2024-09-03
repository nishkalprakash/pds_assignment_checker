//Program to rearrange negative and positive numbers
//Code Creator: Arjun Agarwal
//Roll No: 24NA10018
#include <stdio.h>
#define N 100
int main()
{
int a[N];
int n,i,j,temp;


scanf("%d",&n);					//Read the size of array

for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);			//Take input
}
	printf("Original array:");
	
for(i=0;i<n;i++)
{
	printf("%d\t",a[i]);			//Original array
}
	printf("\n");
//printf("Rearranged array:");
printf("rearranged array:");
 for(i=0;i<n;i++)
{
 if(a[i]<0)
{
 
	
 for(j=i;a[j]>0;j--)
{
 temp=a[i];
  a[j+i]=a[j-i];
  a[j+1]=temp;
} 
printf("%d\t",a[i]);
}}
for(i=0;i<n;i++)
{
if(a[i]>0)
printf("%d\t",a[i]);
}
return 0;
}
