//NAME: RUSHIL SINHA
//ROLL NO.: 24NA10061
//Program to determine co pair numbers from array
#include <stdio.h>
int flag = 0;			//flag for no co-prime
#define N 5
int gcd(int a, int b)		//Calculates gcd of passed numbers
	{	
		int temp;
		while(b != 0)			
		{	
			
			temp = b;
			b = a % b;
			a = temp;
		}
		return a;
	}
	void CoPrime(int a, int b)	//Checks whether numbers are coprime 
	{
		if (gcd(a,b) ==1) 
		{
			printf("%d and %d are Co-Prime\n", a, b);
			if(flag==0) flag = 1;
		}
	}	
	void pair(int arr[])		//Generates all pairs from array
	{	
		
		for (int p = 0; p < N; p++)
		{
			int q = 0;
			while((q != p) && (q < N))
			{
				int a = arr[p];
				int b = arr[q];
				CoPrime(a,b);
				q++;
			}
		}
	}

int main() 
{
	int a =0;
	int b = 0;
	
	int arr[N];
	for (int i = 0; i< N; i++)		//Stores values into array
	{
		int num;
		scanf("%d", &num);
		arr[i] = num;
	}
	pair(arr);
	if(flag==0) printf("No co primes found\n");
	return 0;
}
