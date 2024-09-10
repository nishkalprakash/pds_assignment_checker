//LAB TEST-1
//Code Creator: Arjun Agarwal
//Roll No: 24NA10018
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define N 30					//defining the values of N, A, B as constants
#define A 20
#define B 10

int main(){
float Filter[N], x, y;
int Bin_A[A], Bin_B[B], k, i,a,b; 
srand(50);
a=sizeof(Bin_A);
b=sizeof(Bin_B);

for(i=1; i < N; i++)				// To repeat the steps N times
{
 
 int randomNumber = rand() % 100 + 1;		//Give any random number in the range of [1 to 100]
 x = randomNumber;
for(k=1; k <= x; k++)				//To compute the value of y from k=1 till k=x
 y = ((pow(-1 , k + 1)*pow(k , 2))/(2*k + 1)) + cos(x/2);
 
 Filter[i] = y ;				//store the values in filter array
}
for(i=0; i < N; i++)
{
 int randomNumber = rand() % 100 + 1;		//Give any random number in the  range of [1 to 100]
 x = randomNumber;
 for(k=1; k <= x; k++)
      {
 	y = ((pow(-1 , k + 1)*pow(k , 2))/(2*k + 1)) + cos(x/2);	
  	
  	if(y > Filter[i]){			//If y is greater than any value in filter then Bin_A will be equal to x
  	  Bin_A[i] = x;
  	  a++;}
  	if(y < Filter[i]){			//If y is smaller than any value in filter then Bin_B will be equal to x
  	 Bin_B[i] = x;
  	 b++;
  	 }	 
   	 if(a==A||b==B)
  	 break;
      } 
}
//Print the arrays
printf("Filter: ");				
for(i=0; i < N; i++)
	printf(" %f",Filter[i]);

printf("\n\nBin_A: ");
for(i=0; i < A; i++)
	printf(" %d",Bin_A[i]);
	
printf("\n\nBin_B: ");
for(i=0; i < B; i++)
	printf(" %d",Bin_B[i]);

return 0;
}
