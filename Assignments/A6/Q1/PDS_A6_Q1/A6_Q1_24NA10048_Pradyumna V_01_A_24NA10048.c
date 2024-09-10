//Pradyumna.V 24NA10048//
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define N 100 
#define A 25 
#define B 25
int main()
{
 int bin_A[A],bin_B[B],i,j;
 float filter[N],y,term,count;
 srand(42);
 for(i=0;(i<=N);i++)
 	{int x = rand()  % 100 +1;
 	printf("Random Number: %d\n",x);
 	for(j=0;(j<=x);j++)
 		{count= (pow((-1),j+1)*j*j)/((2*j)+1);
 		term+= count;          //creating a summation//
 		y= term + cos((x/2)); //computing the summation term and finally finding the function//
 		}
 		filter[j]=y;}
 for(i=0;(i<=N);i++)
 	{int x = rand()  % 100 +1; //generating a number for bin a,bin b//
 	printf("Random Number: %d\n",x);
 	for(j=0;(j<=x);j++)
 		{count= (pow(-1,j+1)*j*j)/((2*j)+1);
 		term+= count;
 		y= term + cos((x/2));
 		}
 		if (y>filter[j])
 			{bin_A[j]=y;  //writing conditions for bin a , bin b//
 			}
 		else if (y<filter[j])
 			{bin_B[j]=y;}	}
 for(i=0;(i<=N);i++)
 	{printf(" filter holds %f, \n",filter[i]);}	
 for(i=0;(i<=A);i++)
 	{printf(" bin A holds %d, \n",bin_A[i]);}
 for(i=0;(i<=A);i++)
 	{printf("bin B holds %d, \n",bin_B[i]);}	
 	
 	//finally printing the arrays//				
 			
 					
 
 			
 		
 		
 return 0;
 }		
