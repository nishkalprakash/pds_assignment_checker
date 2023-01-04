/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 7

Description-
*/
#include <stdio.h>
int main()
{
	int m,n,t=0,count=0;
	printf("Enter Array Size 0<n<10 \n");//Array's size
	scanf("%d",&n);
	int a[n],sd[n],fd[n];
	printf("Enter Array Elements\n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	{
		sd[i]=a[i]/10;
		fd[i]=a[i]%10;
	}
		for(int i=0;i<n;i++)
		{
		for(int j=0;j<n-i;j++)
		{
		if(sd[j]<sd[j+1])
		{
		t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
		}	
		}}
for(int i=0;i<n;i++)
		{
		for(int j=0;j<n-i;j++)
		{

		if(fd[j]<fd[j+1])
		{
		t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
		}
}}
for(int i=0;i<n;i++)
	{
printf("%d",a[i]);
}	
		
return 0;
}

