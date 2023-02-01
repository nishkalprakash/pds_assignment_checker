/*Section 14
  Name:Gurram Dhanunjay
  RollNo:22CS10029
  Assignment:11*/
#include <stdio.h>
int main(){
	int n,sum;
	printf("Enter N: ");
	scanf("%d",&n);
	int a[n][n],b[n][n];
	printf("Enter %d numbers for M1: ",n*n);
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter %d numbers for M2: ",n*n);
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("The matrix M1*M2 is:\n");
	for (int i=0;i<n;i++){
		sum=0;
		for (int j=0;j<n;j++){
			sum=0;
			for (int k=0;k<n;k++){
				sum+=a[i][k]*b[k][j];
			}
			printf("%d ",sum);
		}
		printf(" \n");
	}
	return 0;
}