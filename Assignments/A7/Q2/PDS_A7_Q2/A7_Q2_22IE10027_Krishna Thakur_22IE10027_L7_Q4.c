#include<stdio.h>

int main(){
	printf("Enter the size of the array\n");//taking the size as an input 
	int n;
	while(1){
		scanf("%d", &n);
		if((n>0)&&(n<101)){
			break;
		}
	}//ensuring proper size 
	int A[n];
	printf("Enter the elements of the array\n");
	for(int i=0; i<n; i++){
		scanf("%d", &A[i]);
	}//taking the elements
	int m;
	printf("Enter m\n");
	scanf("%d", &m);
	int B[n];
	int k=0;
	for(int i=0; i<n; i++){
		int p=0;
		for(int j=0; j<n; j++){
			/*if(j==i){
				continue;
			}*/
			if(A[i]==A[j]){
				p++;
			}
			}
			if(p==m){
				B[k]=A[i];
				k++;
		}
	}
	/*printf("k is %d\n", k);
	for(int i=0; i<k; i++){
		printf("%d\n", B[i]);
	}*/
	int C[k/m];//making another array to remove duplicacy of numbers 
	int z=0;
	for(int i=0; i<k; i=i+m){
		C[z]=B[i];
		z++;

	}
	for(int i=0; i<k/m; i++){
		printf("%d ", C[i]);
	}
	printf("Appear %d times", m);
}