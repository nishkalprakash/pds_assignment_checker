
//CODE CREATOR== tanmay mishra    24NA10073   
//lAB TEST 1



#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(){

int x,N=10,A,B,sum,i;
double y;
int Filter[N];
int Bin_A[A];
int Bin_B[B];
srand(42);
for (int count = 0 ; count< N ; count++){
				//random number generator

int randomNumber = rand() % 100 + 1;
printf("Random number: %d\n", randomNumber);
		x=randomNumber;
				//puttting the value of x in the given function;
				
for (i=1;i<=x;i++){
			sum += ((pow(i+1,-1))*i*i)/2*i+1 ;
	} 			
y= sum + cos(x/2);

				//now we have the value of y .....putting these in array filter
				
Filter[count] = y;
}

	printf("filter:");
	
			for(int count=0 ; count<N;count++){
				printf("%d\n",Filter[count]);
				}
				
		
		
		
		
		
		// now for 2nd part again generating a random number
		
	srand(42);	
int randomNumber = rand() % 100 + 1;
printf("Random number: %d\n", randomNumber);
		x=randomNumber;
		
		//putting it in y	

for (i=1;i<=x;i++){
			sum += ((pow(i+1,-1))*i*i)/2*i+1 ;
	} 			
y= sum + cos(x/2);

for(int count=0 ; count<N;count++){
if(y>Filter[count]){                                               //SPLITTING Y IN BIN A AND BIN B 
		Bin_A[count]=y;
		for(int A=0 ; A<N ; A++)                           //DONT KNOW WHAT IS HAPPENING BUT BIN A AND BIN B ARE NOT PRITTING VALUES 
								// by another meethod it was showing segmentation fault
								
			printf("%d\n", Bin_A[count]);
			}
			
else		
	
	Bin_B[count]=y;
			for(int B=0 ; B<N ; B++)
		printf("%d\n", Bin_B[count]);	
}			
			


return 0;
}


//
