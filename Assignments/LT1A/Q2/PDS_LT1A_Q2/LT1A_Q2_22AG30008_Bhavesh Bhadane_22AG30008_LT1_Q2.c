/*
  Section 14
  Roll no : 22AG30008
  Name : Bhavesh Nitin Bhadane 
  Assignment no - Lab test 1
  
*/

#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,sum=0;
	printf("Enter a number between 2 to 10:\n");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			sum = sum+1;
			printf("%d ",sum);
		}
		printf("\n");
	}
	return 0;
}
