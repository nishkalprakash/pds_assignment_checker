//Program for Lab Test 1 
//Code Creater: Vishal Maurya
//Roll NO: 24NA10077
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int N=100,A=15,B=10;

float CalculateY(int x);
int RandomN(int seed);

int main()
{

	int a =0;	//variable for assigning values to Bin_A
	int b =0;	//variable for assigning values to Bin_B
	int i=0;	//Variable for loop function
	
	int Bin_A[A], Bin_B[B];	
	float Filter[N];

	for (int i=0;i<N;i++)						//loop for filling Filter
	{
		int x = RandomN(i);		//Generating random number and putting in x 
		float y = CalculateY(x);	//Calculating the funtion of x and putting the value to y
		Filter[i] = y;			//Filling Filter
	}
	
	i=0;
	
	while (Bin_A[A]==0 || Bin_B[B]==0)	//looping until Bin_A or Bin_B completely fills		
	{
		int x = RandomN(i);
		float y = CalculateY(x);
		for (int j=0;j<N;j++)		//loop for filling Bin_A
		{
			if(y>Filter[j])
			{
				Bin_A[a]= x;
				a++;
				break;
			}
		}
		for (int j=0;j<N;j++)		//loop for filling Bin_B
		{
			if(y<Filter[j])
			{
				Bin_B[b]= x;
				b++;
				break;
			}
		}
		i++;
	}
	
	
	// Printing the values
	
	
	printf("Filter : ");
	for(i=0;i<N;i++)
	{
		printf("%f ,", Filter[i]);
	}
	printf("\n");
	
	printf("Bin_A : ");
	for(i=0;i<A;i++)
	{
		printf("%d ,", Bin_A[i]);
	}
	printf("\n");
	
	printf("Bin_B : ");
	for(i=0;i<B;i++)
	{
		printf("%d ,", Bin_B[i]);
	}
	printf("\n");

	return 0;
}


//Function for calculating Y
float CalculateY(int x)
{
	float sign=1,k,a,b,c,l,y=0;
	for(k=1;k<=x;k++)
	{
		
		for(l=0;l<(k+1);l++)
		{
			sign=sign*(-1);
		}
		
		a=k*k;
		
		b= (2*k)+1;
		
		c=(sign*a)/b;
		
		y=y+c;
	}
	
	y=y+ (cos(x/2));
	
	return y;
}


//Function for generating random number based on a seed
int RandomN(int seed)
{
	srand(seed);
	int x = rand()%100+1;
	return x;
}
