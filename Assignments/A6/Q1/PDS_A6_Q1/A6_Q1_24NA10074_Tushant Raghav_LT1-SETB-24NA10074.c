#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

#define N 10
#define A 10
#define B 10
int main()
{srand(40);
	float Filter[N];
	int Bin_A[A],Bin_B[B];
	
	//creating filter 
	printf("Filter: ");
	for(int i=0;i<N;i++){
		//random number genrator to check the test cases
		int randomNumber = rand()%100+1;
		int x=randomNumber,y;
			for(int k=1;k<=x;k++){
			y=(k^2)/(2*k+1)-((-1)^k)*k+sin(x/3);
			}
		Filter[i]=y;
		printf("%f ",Filter[i]);
		}
	//entering values in Bin_A and Bin_B
	for(int j=0;j<N;j++){
	//random number genrator to check the test cases
		int randomNumber = rand()%100+1;
		int x=randomNumber,y;
			for(int k=0;k<=x;k++){
			y=(k^2)/(2*k+1)-((-1)^k)*k+sin(x/3);
			}	
		//for the respective indices' value of filter if y is greater then it goes to Bin_B otherwise to Bin_A 
		//if y>Filter[0] then x goes to Bin_B
		//if y<Filter[1] then x goes to Bin_A
		if(y<Filter[j]){
		Bin_A[j]=x;
		Bin_B[j]=0;
		}
		if(y>Filter[j]){
		Bin_B[j]=x;
		Bin_A[j]=0;
		}	
	}
	printf("\nBin_A :\n");
	for(int l=0;l<A;l++){
	printf("%d ",Bin_A[l]);
	}
	printf("\nBin_B :\n");
	for(int m=0;m<B;m++){
	printf("%d ",Bin_B[m]);
	}
	return 0;
}
