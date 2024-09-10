#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <math.h>
#define N 10
#define A 10
#define B 10
int main()
{
	int filter[N], bin_A[A], bin_B[B];
	int y=0, x, i, a, b, k, t=1 ;
	
	//filling the filter
	srand(42);
		for(a=0 ; a<N ; a++)
		{
			int x = rand() % 100 +1 ;
			for(k=1; k<=x ; k++)
			{
				for(int p=1; p<=k ; p++)
				{t = t*(-1);}
				y = y + (k*k)/(2*k+1) - t*k + sin(x/3);
				
			}
			filter[a] = y;
		}
		
	// calculating for bin_a and bin_ b
	bin_A[9]=-1 , bin_B[9]=-1;
	for(a=0 ; bin_A[9]==-1 && bin_B[9]==-1 ; a++)
	{
		
		int x = rand() % 100 +1 ;
		for(k=1; k<=x ; k++)
		{
			for(int p=1; p<=k ; p++)
			{t = t*(-1);}
			y = y + (k*k)/(2*k+1) - t*k + sin(x/3);
		}
		
	// filling bin_a
	if (y<filter[0] || y<filter[1] || y<filter[2]|| y<filter[3] || y<filter[4] || y<filter[5] || y<filter[6] || y<filter[7] || y<filter[8] || y<filter[9])
		{b=0;
		 bin_A[b]=x;
		 b++;}
		 
	// filling bin_b
	if (y>filter[0] || y>filter[1] || y>filter[2] || y>filter[3] || y>filter[4] || y>filter[5] || y>filter[6] || y>filter[7] || y>filter[8] || y>filter[9])
		{int c = 0;
		bin_B[c]= x;
		c++;}
		
	}
	printf("filter :");
	for(i=0; i<10 ; i++)
	{printf(" %d", filter[i]);}
		
	printf("\nBin_A :");
	for(i=0; i<10 ; i++)
	{printf(" %d", bin_A[i]);}
	
	printf("\nBin_B :");
	for(i=0; i<10 ; i++)
	{printf(" %d", bin_B[i]);}
	
	return 0;
}
