/*name-gaurav meena
roll no -22CE10025
lab-11*/

#include<stdio.h>

typedef struct{
	int n;
	int **m;
}matrix;

void initmat(matrix*M,int N){
	M->n=N;
	M->m=(int**)malloc(M->n* sizeof(int*));
	for(int i=0;i<M->n;i++){
		M->m[i]=(int*)malloc(M->n * sizeof(int));
	}
}

int main(){
	int n;
	printf("ENTER N:");
	scanf("%d",&n);

	int a[n][n];
	printf("Enter array element:");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		scanf("%d",a[i][j]);
	}
	}
		for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		printf("%d",a[i][j]);
	  }
	}

	return 0;

}
