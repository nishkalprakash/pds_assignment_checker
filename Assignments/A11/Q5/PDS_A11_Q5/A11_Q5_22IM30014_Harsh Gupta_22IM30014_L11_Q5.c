
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define ll long long int
typedef struct {
	int n;
	int **m;

}matrix;
void initMat(matrix *ma,int k){
	ma->n=k;
	ma->m=(int**)malloc (ma->n*sizeof(int));
	for (int i=0;i<ma->n;i++){
		ma->m[i]=(int*)malloc((ma->n)*sizeof(int));
	}
}
void getmat(matrix *ma,int k){
	for(int i=0;i<k;i++){
		for(int j=0;j<k;j++){
			int x;scanf("%d",&x);
			ma->m[i][j]=x;
		}
	}
}

void printMat(matrix *ma,int k){
	for(int i=0;i<k;i++){
		for(int j=0;j<k;j++){
			printf("%d ",ma->m[i][j]);

		}printf("\n");
	}
}
void zeroMat(matrix *ma,int k){
	for(int i=0;i<k;i++){
		for(int j=0;j<k;j++){
			ma->m[i][j]=0;
		}
	}
}
void multMat(matrix *ma1,matrix *ma2,matrix *ma3,int k){
	for(int q=0;q<k;q++){
		for(int i=0;i<k;i++){
			for(int j=0;j<k;j++){
				ma3->m[q][i]+=ma1->m[q][j]*ma2->m[j][i];
			}
		}
	}
	
}
int main() {
	matrix m1,m2,m3;
	int n;scanf("%d",&n);
	initMat(&m1,n);
	initMat(&m2,n);
	initMat(&m3,n);
	printf("Enter %d for M1 : ",n*n);
	getmat(&m1,n);
	printf("\nEnter %d for M2 : ",n*n);
	getmat(&m2,n);
	zeroMat(&m3,n);
	multMat(&m1,&m2,&m3,n);
	printMat(&m3,n);
	
	
}