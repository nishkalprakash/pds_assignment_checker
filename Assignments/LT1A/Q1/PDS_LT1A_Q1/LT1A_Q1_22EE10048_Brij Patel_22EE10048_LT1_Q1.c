/*

SECTION 14

Roll No:22EE10048

Name: Brij

Lab Test 1

Description-Perfect numbers
*/
#include <stdio.h>
int main()
{
	printf("Enter N\n");
	int N,t=0,sum=0;
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<i;j++)
		{
			if(i%j==0)//CONDITION FOR FACTORS
			sum+=j;//Sum of Factors
		}
		if(sum==i)//CONDITION FOR PERFECT NUMBER
		{
			printf("%d ",i);
			t=1;//Changing t to 1 to check if a perfect number was present between 1 and N
		}
		sum=0;//To store new sum for (i+1)th number 
	}
	if(t==0)
	printf("Invalid Input\n");//t==0 implies no perfect number was there
	return 0;
}
