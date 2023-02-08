/*Section 14
  Name:Gurram Dhanunjay
  RollNo:22CS10029
  LAB TEST*/
#include <stdio.h>
#include <stdlib.h>
void print_arr(int **arr,int m,int n,int cols){
	if (m==1 && n==1) {                         //base condition
		printf("%d\n",arr[0][0]);
		return;
	}
	else {
		printf("%d ",arr[m-1][n-1]);
		if (n==1) {
			printf("\n");
			return print_arr(arr,m-1,cols,cols);
	}
	else return print_arr(arr,m,n-1,cols);
}}
int main(){
	int m,n,num;
	printf("Enter M:"); scanf("%d",&m);        //entering no of rows
	printf("Enter N:"); scanf("%d",&n);        //entering no of columns
	int **arr;                                 //**arr required to create another ptr in **arr to store n ele
	arr=(int **)malloc(m*sizeof(int *));
	for (int i=0;i<n;i++){
		arr[i]=(int *)malloc(n*sizeof(int));   //allocating space using malloc
	}
	if (m>n){
		arr[m-1]=(int *)malloc(n*sizeof(int));
	}
	printf("Enter %d elements:",m*n);
	for (int i=0;i<m;i++){                    //inputting the numbers
		for (int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}

	}
	print_arr(arr,m,n,n);
	return 0;
}