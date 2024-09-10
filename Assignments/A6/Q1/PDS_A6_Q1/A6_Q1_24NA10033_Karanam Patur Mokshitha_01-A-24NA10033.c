#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define N 10
#define A 5
#define B 5
int main () 
{       int x,k,count=0;
	double t;
	double y=0.0;
	float Filter[N];
	int Bin_A[A];
	int Bin_B[B];
	srand(42);
	for(k=1;k<=x,count<=N;k++)
	          {
			   x=rand()%100+1;
			   printf("x:%d\n",x);
		           x=x*(M_PI)/180;
	    
	                  t=((pow(-1,k+1)*pow(k,2))/2*k+1)+cos(x/2);
			  y+=t;
			  Filter[k]=y;
			  count++;
	          }
	    
		for(k=1;k<=x;k++)
		{
		   t=(int)(t);
		    y+=t;
	  	   if(y>Filter[k])
		    {
		       Bin_A[k]=y;
		    }
		    if (y<Filter[k])
		    {
			Bin_B[k]=y;
				
	            }
	
			
		
		}
		
		printf("Values in Filter[N] are :\n");
		printf("--------------------------\n");
		for(int i=0;i<=N;i++)
		{
		printf("Filter[%d]:%f\n",i,Filter[i]);
		}
		
		printf("Values in Bin_A[A] are :\n");
		printf("--------------------------\n");
		for(int i=0;i<=A;i++){
		printf("Bin_A[%d]:%d\n",i,Bin_A[i]);
		}
		
		printf("Values in Bin_B[B] are :\n");
		printf("--------------------------\n");
		for(int i=0;i<=B;i++){
		printf("Bin_B[%d]:%d\n",i,Bin_B[i]);
		}
		
	return 0;
}

