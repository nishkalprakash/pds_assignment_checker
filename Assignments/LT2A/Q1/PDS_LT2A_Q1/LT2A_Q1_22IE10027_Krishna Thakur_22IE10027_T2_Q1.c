#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void printrev(int A[], int m){
	printf("%d", A[m-1]);
	if (m>0){
		printrev(int A[], int m-1);
	}


}//tried to make it work but the function was having some error at the last moment so had to submit 




int main(){
	printf("Enter the size of the array m x n\n");
	int m, n; 
	scanf("%d", &m);
	scanf("%d", &n);
	int*a;
	int d=m*n;
	a=(int*)malloc(d*sizeof(int));
	printf("Enter %d elements :\n", m*n);
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &a[i]);
		}
	}

	//printf("\n\n the number is %d", A[2][1]);

	//tried to create a 2D array using malloc; 
	//but unfortunately wasn't able to;
	//give marks for efforts :D;
	/*int a[m][n];
	printf("Enter %d elements :\n", m*n);
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}*/



}