#include<stdio.h>

int main(){
	//program to read an integer and print all the perfect 
	//numbers smaller than that integer.
	int n, i, b; //initialising integers to be used
	printf("Enter a positive number");
	while(1){
	scanf("%d", &n);
	if (n>0){
		break;
	}
    else
    	printf("Invalid");
        continue;}
	int A[n];//creating an array to store 
	//all numbers smaller than that number
	b=1;


	for(i=0; i<n; i++){
		A[i]=b;
		b++;

	}
	/*for(i=0; i<n; i++){
		printf("%d\n", A[i]);
	}*/ //was checking whether the array was fine
	int sum=0;
	int c=1;

	//following loop transverses through the array 
	//and checks every number for a perfect number
	//and if true it prints the number
	for(i=0; i<n; i++){
		sum=0;
		//printf("%d\n", A[i]);
		for(c=1; c<A[i]; c++){
			//printf("run\n");
			if(A[i]%c==0){
				sum=sum+c;
			}
		}
		//printf("run\n");
		if(sum==A[i]){
			printf("%d ", A[i]);
		}
	}



	return 0;
}