#include<stdio.h>

int main(){
	printf("Enter the size of the array");//taking the size as an input 
	int n;
	while(1){
		scanf("%d", &n);
		if(n>0){
			break;
		}
	}//ensuring the size is not negetive
	int A[n];
	printf("Enter the elements of the array");
	for(int i=0; i<n; i++){
		scanf("%d", &A[i]);
	}//taking the elements
	printf("Enter the number to be insterted");
	int m;
	scanf("%d", &m);
	int p;
	int B[n+1];
	for(int i=0; i<n; i++){
		if(A[i]>m){
			p=i;//finding the point at which the new number is to be inserted
			break;
		}
	} 
	for(int i=0; i<p; i++){
		B[i]=A[i];
	}
	for(int i=p+1; i<n+1; i++){
		B[i]=A[i-1];
	}//taking the values of A to be stored in proper
	//positions in B
	B[p]=m;//inserting the given number in B

	for(int i=0; i<n+1; i++){//printing the output array
		printf("%d\n", B[i]);
	}
	return 0; 
	
}