#include<stdio.h>

int main(){
	printf("Enter the number of elements in one row and one column respectively : ");
	int n, m;
	scanf("%d %d", &n, &m); 
	int A[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d", &A[i][j]);
		}
	}

	for(int i=0; i<n; i++){
		int minc=A[i][0];
		int k=0;
		int o;
		for(int j=0; j<m; j++){//checking for minimum in the column
			if(A[i][j]<minc){
				A[i][j]=minc;
				k=j;
			}
		}
		int maxr=A[0][k];
		for(int l=0; l<n; l++){//checking for maximum in the row
			if(A[l][k]>maxr){
				maxr=A[l][k];
				o=l;

			}

		}
		if(o==i){
			printf("%d is the saddle point", A[o][k]);
		}
		else{
			printf("There is no saddle point in the array");
		}
	}
	
	return 0;
}