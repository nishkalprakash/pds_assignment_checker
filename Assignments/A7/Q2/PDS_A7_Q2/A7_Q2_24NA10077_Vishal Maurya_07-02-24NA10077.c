//Program to output how many numbers are GCD
//Code Creater: Vishal Maurya
//Roll NO: 24NA10077
#include <stdio.h>

void pair(int a[]);
int gcd(int a, int b);
int CoPrime(int a, int b);

int main()
{
	int a[5];
	int x,n,count =0;
	printf("Enter five numbers:\n");
	scanf("%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4]);
	
	for (int i =0; i<5; i++)
	{
		for (int j = i+1; j<5; j++)
		{
			count = count + CoPrime(a[i] , a[j]);
			if(CoPrime(a[i] , a[j]))
			{
				printf("%d and %d are Co-Prime\n", a[i] , a[j]);
			}
		}
	}
	if (count ==0)
	{
		printf("No Co-Prime Found");
	}
	
	return 0;
}


int CoPrime(int a, int b)
{
	int rem;
	while (b>1)
	{
		rem = a%b;
		a = b;
		b = rem;
	}
	if(b==1)
	return 1;
	
	if(b==0)
	return 0;
}

int gcd(int a, int b)
{
	int rem;
	while (b>1)
	{
		rem = a%b;
		if(rem==0)
			return b;
		a = b;
		b = rem;
		
	}
	return 1;
}
