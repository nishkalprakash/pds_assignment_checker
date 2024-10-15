#include<stdio.h>

int sort(int n,int A[n]){
for(int i=0;i<n;i++){
	for(int j=i+1; j<n;j++){
		if(A[i]>A[i+1]){
			int temp=A[i];
			A[i]=A[i+1];
			A[i+1]=temp;
			} 
		}
		
	
	}
}
int main()
{
	int n;
	int A[n];
	// Taking the size of A[] 
	printf("n = ");
	scanf("%d",&n);
	//Reading the size of array
	printf("A[n] = ");
	scanf("%d",&A[n]);
	sort(n,A[n]);
	
	int m;
	printf("m = ");
	scanf("%d\n",&m);
	

	


	
	
	
}
