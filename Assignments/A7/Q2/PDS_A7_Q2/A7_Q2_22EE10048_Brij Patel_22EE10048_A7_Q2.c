/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 7

Description-Counting Array element"S frequency
*/
#include <stdio.h>
int main()
{
	int m,n,count=0,temp=0;
	printf("Enter Array Size\n");//Array's size
	scanf("%d",&n);
	int a[100];
	printf("Enter Array Elements\n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter m\n");
	scanf("%d",&m);
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(a[j]==a[i])
			{
			count++;//counting eaching element
			}
		}
		if(count==m)//checking if count matches m
		{
			printf("%d ",a[i]);
			temp=1;//temporary variable to check whether any number matches m
		}
		count=0;
	}
if(temp==0)
printf("NO ");//no element matches m
printf("Appears %d times",m);
return 0;
}

