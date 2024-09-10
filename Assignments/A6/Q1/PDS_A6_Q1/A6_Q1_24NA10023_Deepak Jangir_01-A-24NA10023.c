// Lab Test 1
// Deepak Jangir
// 24NA10023
// EVEN TERMINAL - B
#include<stdio.h>
#include<math.h>
int main()
{
	int N, A, B, k;
	float Filter[N]; // An array of floating-point values of size N
	int Bin_A[A];	 // An array of integer values of size A
	int Bin_B[B];    // An array of integer values of size B
	
	float y, x;
	  
		int randomNumber;
		
		
	for(int i=1; i<=10; i++)
	{	
		y = (pow)(k,2)/(2*k+1);
		y = y - (pow)(-1,k)*k;
		y = y + sin(x/3);
	
		Filter[i]=y;
		y=0;
		printf("%f", Filter[i]);
		x = randomNumber;
	
		printf("value of y is %f", y);
		
		if(y<Filter[i])
		{
			x=Bin_A[i];
			printf("%d", Bin_A[i]);
			printf("\n");
		}
		else
		{
			x=Bin_B[i];
			printf("%d", Bin_B[i]);
			printf("\n");
		}
		
		if(Bin_A[i] == Bin_A[A] || Bin_B[i] == Bin_B[B])
		{
			printf("%f", Filter[i]);
		}
		
	}	
	return 0;
}
