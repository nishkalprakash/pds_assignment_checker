#include<stdio.h>

int main(){
	printf("Enter the size of the array");//taking the size as an input 
	int n;
	while(1){
		scanf("%d", &n);
		if((n>0)&&(n<11)){
			break;
		}
	}//ensuring that the size is between 2 and 10
	int A[n];
	printf("Enter the elements of the array");
	for(int i=0; i<n; i++){
		scanf("%d", &A[i]);
	}//taking the elements of the array as input 
	
	int o=0;//the count for out of order numbers 
	for(int j=0; j<n; j++){//traversing the elements of the array
		for(int i=0; i<j; i++){
			if(A[i]>A[j]){
				o++;
				break; 
				//printf("upper hit\n");was checking the error in the loop
			}
		}
		for(int i=n-1; i>j; i=i-1){
			if(A[i]<A[j]){
				o++;
				break;
				//printf("Lower hit\n");
			}
		}
	}
	printf("The Number of elements out of order are %d", o);
	return 0;
}