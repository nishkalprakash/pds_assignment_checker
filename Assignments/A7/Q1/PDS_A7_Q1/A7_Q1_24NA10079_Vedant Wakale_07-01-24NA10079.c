#include <stdio.h>

int k=1,i,n,x ;


int power(int x,int n)    //generating the function for power i.e x^n
{
	if (n==0)
	{
		return 1;
	}

	else{
		for (i=1;i<=n;i++)
		{
			k = k * x;

		}
		return k;
	}
}
int fact(int n)    		// generating the function for factorial of integer n
{
int f=1;
	if(n==0||n==1)
	{
	return 1;
	}
	else
	{
for (int i=1;i<=n;i++)
{
 f = f * i;

}
return f;
} 
}

int main()
{

	printf("Enter x\n");
	scanf("%d",&x);			//input x

	printf("Enter n\n");  
	scanf("%d",&n); 		// input n


	
	float sum = 0;

	for ( int i=0;i<n-1;i++)

	{ 
	
	
	sum = sum +  (float) (power(x,i)) / (fact(i)) ; 
				// making the formula for the calculation of series


	}
	
	printf("%f",sum);
}









