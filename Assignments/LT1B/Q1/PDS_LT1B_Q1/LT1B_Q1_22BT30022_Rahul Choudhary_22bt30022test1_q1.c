/*
SECTION 14
roll No. 22BT30022
Name: Rahul choudhary
Assignment no.3
Description: to get armstrong 
*/
#include <stdio.h>
#include<math.h>
int main()
{
	long int n,rem=0,t,sum=0,count=0;	// take long numbers
	printf("enter value of n");
	scanf("%ld",&n);
	for (int i=1;i<=n;i++)
	{
		t=i;
		while(t!=0) //to count digits
		{
			rem=t%10;
			count++;
			t/=10;
		}

		t=i;
		while (t!=0)  //to find sum
		{
		rem=t%10;
		sum+=pow(rem,count);
		t/=10;
		}
		if(sum==i)  //checking codition
		printf("%d ",i);
		sum=0;count=0;
	}
	return 0;
}
	
