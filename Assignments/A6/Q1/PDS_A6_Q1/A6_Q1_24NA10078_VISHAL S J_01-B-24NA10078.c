#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define N 5
#define A 5
#define B 5
int main()
{
	float Filter[N], y;
	int Bin_A[A], Bin_B[B], x, k, i, a=0, b=0;
	srand(42);
	for (i=0; i<N; i++) {
		x=rand()%100+1;				//assigning random variable to x
		for (k=1, y=0; k<=x; k++) {		
			y=y+((pow(k,2)/(2*k+1.0))-(pow(-1,k)*k)+sin(x/3.0));	//evaluation of y
		}
		Filter[i]=y;				
	}
	
	
	for(i=0; i<N; i++) {
		x=rand()%100+1;				
		for (k=1, y=0; k<=x; k++) {		
			y=y+((pow(k,2)/(2*k+1.0))-(pow(-1,k)*k)+sin(x/3.0));	
		}
			if (y<Filter[0]||y<Filter[1]||y<Filter[2]||y<Filter[3]||y<Filter[4]) {
			Bin_A[a]=x;
			a++;}
			
			else if (y>Filter[0]||y>Filter[1]||y>Filter[2]||y>Filter[3]||y>Filter[4]) {
			Bin_B[b]=x;
			b++;}
		
	printf("Array Filter: ");
	for (i=0; i<N; i++) printf("%f  ", Filter[i]); 
	printf("\n");
	
	printf("Bin_A : ");
	for (i=0; i<A; i++) printf("%d  ", Bin_A[i]); 
	printf("\n");
	
	printf("Bin_B : ");
	for (i=0; i<N; i++) printf("%d  ", Bin_B[i]); 
	printf("\n");
	
	return 0;
}
	
	
	
			
			
				
	
	
	
	
	
}
