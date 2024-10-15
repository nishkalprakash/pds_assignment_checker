//Program for searching and sorting in an array
//Program Creator: Pratibha Shakya
//Roll no. : 24NA10050

#include<stdio.h>

int main(){
	int n, A[101], m, i, temp, B[n+1], count;
	
	printf("n = ");
	scanf("%d", &n);	
		
	printf("A[n] = ");
	for(i=0; i<n; i++){
		scanf("%d", &A[i]);
	}
	for(i=0; i<n-1; i++){
		if(A[i]<=A[i+1])
			continue;
		else{
			temp=A[i];
			A[i]=A[i+1];
			A[i+1]=temp;
		}
	}
	
	/*Used an additional array
	printf("m = ");
	scanf("%d", &m);
	for(i=0, count=0; i<n+1; i++, count++){
		if(A[i]<m)
			B[i]=A[i];
		else{
			B[i]=m;
			break;
		}
	}
	for(i=count; i<n+1; i++){
		B[i+1]=A[i];
	}
	
	printf("Output Array: \n");
	printf("[");
	for(i=0; i<n+1; i++)
		printf("%d, ", B[i]);
	printf("]");
	*/
	printf("m = ");
	scanf("%d", &m);
	
	for(i=0, count=0; i<n; i++, count++){
		if(A[i]<m)
			continue;
		else
			break;
	}
	
	for(i=count; i<n; i++){
		A[i+1]=A[i];
	}
	A[i]=m;
	
	printf("Output Array: \n");
	printf("[");
	for(i=0; i<n+1; i++)
		printf("%d, ", A[i]);
	printf("]");
	
	return 0;
} 

