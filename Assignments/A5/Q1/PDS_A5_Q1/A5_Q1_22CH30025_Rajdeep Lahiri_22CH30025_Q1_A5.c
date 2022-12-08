#include <stdio.h>
int power(int x,int n)//function to calculate x^n
{ 
	int c=1,i;
	for(i=1;i<=n;i++)
		c = c*x;
	return c;
}
int fact(int n)//function to calculate the factorial
{
	int prod = 1,i;
	for(i=1;i<=n;i++)
	{
		prod = prod*i;
	}
	return prod;
}
int main()
{
	float sum = 0.0,term = 0.0;//variables to store each term and the sum
	int n,x,i;
	
	printf("Enter the value of N and X");
	scanf("%d",&n);//input for n
	scanf("%d",&x);//input for x
	for (i=1;i<=n-1;i++)
	{
		term=((float)power(x,i)/fact(i));//generating each term by calling fucntions
		printf("%d\n",fact(i));
		
		printf("%d\n",power(x,i));
		
		printf("%f\n",term);
		
		

		sum+=term;//calcualting sum
	}
	printf("the sum is %f",sum+1.0);//adding 1.0 to compensate for the x^0 term
	return 0;
}    
		



