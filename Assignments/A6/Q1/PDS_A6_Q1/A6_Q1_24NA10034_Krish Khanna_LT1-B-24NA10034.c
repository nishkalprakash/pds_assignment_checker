#include <stdio.h>	//Including all the std libraries.
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define N 10		//#defining all the constants.
#define A 5
#define B 10
#define Z 11
int main()
{
	int n, i, x, j, k, flag=0, l, m; 	//declaring the variables.
	float sum=0, y, b;
	float Filter[N];		//declaring the arrays.
	int Bin_A[A];
	int Bin_B[B];
	for( i=48 ; i<N+48 ; ++i )	//loop for generating the random values of x.
	{
		srand(i);
		x = rand()% 100 + 1;
		for( k=1 ; k<=x ; k++)
		{
			if(k%2==0) 	//caclculating the values of y.
			sum = sum + (k*k)/(2*k + 1) - k + sin(x/3);
			else
			sum = sum + (k*k)/(2*k + 1) + k + sin(x/3);
		}
		y = sum;
		Filter[i-48] = y;	//storing the values of y in Filter Array.
	}
	for(j=0; j<N; j++)		//Printing the filter array.
	printf("\n FIlter[%d] = %f\n",j, Filter[j]);
	srand(Z);
	for( i=0, l=0, m=0; i<N && (l<A || m<B)  ; ++i)	//Loop condition make sures that either A or B gets filled.
	{
		x = rand()% 100 + 1;
		for( k=1 ; k<=x ; ++k)		//Calculating the values of y for randomly generated values of x.
		{
			if(k%2==0)
			sum = sum + (k*k)/(2*k + 1) - k + sin(x/3);
			else
			sum = sum + (k*k)/(2*k + 1) + k + sin(x/3);
		}
		y = sum;
		for(j=0; j<N && y<Filter[j] ; ++j) flag++;  //	When y will be less than Filter[j] the flag increases by 1.
		if (flag==N-1)   //If flag has increased N times then y is less than all the N elements of Filter and thus the corresponding x values are stored in Bin_A. 
		{
			Bin_A[l]=x; 
			++l;
		}
		else		//If the above condition is not followed then the corresponding x values are stored in Bin_B
		{
			Bin_B[m]=x;
			++m;
		}
	}
	for(j=0; j<A; j++) 	//Printing the arrays Bin_A and Bin_B.
	printf("\n Bin_A[%d] = %d\n",j, Bin_A[j]);
	for(j=0; j<N; j++)
	printf("\n Bin_B[%d] = %d\n",j, Bin_B[j]);
	return 0;
}
