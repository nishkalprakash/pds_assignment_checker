#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

//Created by - Piyush Dubey
//Roll no - 24NA10046
//section - 6


int main(){
	//making the required arrays
	const int N=50,A=25,B=35;
	float Filter[N];
	int Bin_A[A],Bin_B[B];
	//loop to repeat the steps N times 
	srand(42);
	for(int i=0;i<N;i++)
	{
		//Random number generator to check the test cases
		
		int x = rand()%100+1;
		//y has to be calculated for given x
		float y=0;
		//loop to get the summation part of y
		for(int k=1;k<=x;k++)
		{
			y += ((pow(-1,k+1))*(pow(k,2)))/(2*k+1);
		}
		// after the summation part addition of cos(x/2) in y
		y = y + cos(x/2);
		Filter[i]=y;//assigning y to Array Filter.
	}
	//to print the Filter Array 
	printf("\nFilter :");
	for (int i=0;i<N;i++)
	{
	printf(" %f",Filter[i]);
	}
	//checking which bin will fill earlier 
	int Z;//Z for filling the limit in the next loop 
	if(A>B)
	 Z=A;
	else
	 Z=B;
	
	//for to fill Bin_A or Bin_B
	//making variables fillA and fillB to fill the respective arrays
	int fillA=0,fillB=0;
	for(int i=0;i<Z;i++)
	{	//loop to check and compare the values of Filter
		//Random number generator to check the test cases
		int x = rand()%100+1;
		//y has to be calculated for given x
		float y=0;
		//loop to get the summation part of y
		for(int k=1;k<=x;k++)
		{
			y += ((pow(-1,k+1))*(pow(k,2)))/(2*k+1);
		}
		// after the summation part addition of cos(x/2) in y
		y = y + cos(x/2);
		//loop to fill Bin_A
		for(int j=0;j<N;j++)
		{
			if(y>Filter[j])
			{
				Bin_A[fillA]=x;
				fillA++;
				break;
			}
		}
		// loop to fill Bin_B
		for(int j=0;j<N;j++)
		{
			if(y<Filter[j])
			{
				Bin_B[fillB]=x;
				fillB++;
				break;
			}
		
		}
			
		
	}
	//to print Bin_A array
	printf("\nBin_A:");
	for(int i=0;i<A;i++)
	{
		printf(" %d",Bin_A[i]);
	}
	//to print Bin_B array
	printf("\nBin_B:");
	for(int i=0;i<B;i++)
	{
		printf(" %d",Bin_B[i]);
	}
	
	return 0;
}
