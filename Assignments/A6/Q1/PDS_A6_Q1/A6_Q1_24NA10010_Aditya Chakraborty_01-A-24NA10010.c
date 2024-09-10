//test 1 , to define three arrays and to filter out the values of y and x in those three arrays
//Code Creator:Aditya Chakraborty
//Roll No : 24NA10010
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main (){
	#define N 20
	#define A 10
	#define B 10
	float Filter[N];
	int Bin_A[A],Bin_B[B];
	float sum=0;
	srand(42);
	float y;
	for (int i=0;i<N;i++){
		int x = rand()%100 + 1 ;
		printf ("Random Number: %d\n",x);  //to generate random numbers
		for (int k=1;k<=x;k++){
		y = ((pow(-1,k+1)*pow(k,2))/(2*k+1) + cos(x/2));
		sum += y;
		}
		printf ("y is : %f\n",sum);
		Filter[i]=sum;
		printf ("The filter array is : %f\n",Filter[i]);
	}
	srand(42);
	float b;
	float sym;
	for (int j=0;j<A;j++){
		int a = rand()%100 + 1 ;
		printf ("Random Number: %d\n",a);
		for (int c=1;c<=a;c++){
		int i;
		b = ((pow(-1,c+1)*pow(c,2))/(2*c+1) + cos(a/2));
		sym += b;
		printf ("y is : %f\n",sym);
		if (sym>Filter[i]){         //to check the condition
		Bin_A[j]=a;
		} else if (sym <Filter[i]){
		Bin_B[j]=a;
		} else {
		printf ("Already exist in filter array");
		}
		}
	}
	for (int j=0;j<N;j++){
	printf ("The Bin_A array is : %d\n",Bin_A[j]);
	}
	for (int j=0;j<N;j++){
	printf ("The Bin_B array is : %d\n",Bin_B[j]);
	}
	return 0;
}
