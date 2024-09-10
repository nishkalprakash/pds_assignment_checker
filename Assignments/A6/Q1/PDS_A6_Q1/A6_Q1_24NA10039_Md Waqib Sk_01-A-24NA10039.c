//labtest1
//creator:md waqib sk
//roll:24NA10039

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(){
srand(42);
//defines the values of N ,A ,B
	 int N =10;
	int A =7;
	 int B =5;
	
	//declares the arrays
	float Filter[N];
	int bin_a[A];
	int bin_b[B];
	
	
	//TASK 1 :Filling the Filter array
	int f=0;
	while(f<N){
	
	int x=rand() % 100+1;
		

	int y=0;
	int sign=1;
	for(int k=1;k<=x;k++){
	y+=(sign*k*k)/(2*k+1) +cos(x/2);
	sign=sign*(-1);
	
	}
	
	Filter[f]=y;
	f++;
	
	
	}
	//Task 2:Entering values in bin_a and bin_b
	
	int a=0,b=0; //pointers to first element of each bin_a and bin_b
	
	while(a<A &&b<B){
	
	int x=rand()%100+1;
	
	int y=0;
	int sign=1;
	for(int k=1;k<=x;k++){     
	y+=(sign*k*k)/(2*k+1) +cos(x/2);
	
	sign=sign*(-1);
	}
	
	int flag1=0,flag2=0;
	for(int i=0;i<N;i++){  //compares y with every element in Filter array
	if(y>Filter[i]){
	flag1=1;
	
	}
	if(y<Filter[i]){
	flag2=1;
	}

	} 
	//inserts the elements in bin_a or bin_b if condition satisfies
	if(flag1){
	bin_a[a]=x;
	a++;
	
	
	}
	if(flag2){
	bin_b[b]=x;
	b++;
	
		}
	}
	
	//DISPLAYING THE VALUES IN THE ARRAYS
	printf("The values of Filter array: \n");
	for(int i=0;i<N;i++){
		printf(" %f ",Filter[i]);
		 
	}
	printf("\n");
	printf("The values of bin_a array: \n");
	for(int i=0;i<a;i++){
		printf(" %d ",bin_a[i]);
		
	}
	printf("\n");
	printf("The values of bin_b array: \n");
	for(int i=0;i<b;i++){
		printf(" %d ",bin_b[i]);
		
	}
	printf("\n");
	}





