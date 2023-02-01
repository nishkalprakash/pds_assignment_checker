#include<stdio.h>


float sum(int n)
{
	if(n==0)
	{
		return 0;

    }

	
	else 
	 return  sum(n-1)+ 1.0/n;


	
}

int main()
{
	int n;
	
	printf("Enter the number of terms\n");
	scanf("%d",&n);

	float series  = sum(n);

	printf("%f",series);

	return 0;


}