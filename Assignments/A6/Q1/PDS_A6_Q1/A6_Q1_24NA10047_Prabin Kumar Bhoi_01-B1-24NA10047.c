#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define N 100
#define A 25
#define B 25

int main() {
int bin_A[5],bin_B[5]
float filter[10],y
double term,count
srand(42)
for (int i=0;i<=N;i++) 
	{int random=rand() %100+1;
	printf("randomNumber:%d",random);
	
	for(int k=0;k<=random;k++) {
		{count = (pow(-1,k+1)*k*k) /((2*k)+1)
		term+=count;
		y=term + cos(random/2);}
		filter[k]=y;}
	} 
	
for(i=0;(i<=N);i++) 
	{int random=rand() %100+1;
	printf("randomNumber:%d",random);
	for(int k=0;k<=random;k++) {
		{count = (pow(-1,k+1)*k*k) /((2*k)+1)
		term+=count;
		y=term + cos(random/2);}
		if (y>filter[5]) {
			bin_A[k]=y
		}
		else if (y>filter[5]) {
			bin_B[k]=y
		}}
 		
	
	}
	

	random 0;
}

