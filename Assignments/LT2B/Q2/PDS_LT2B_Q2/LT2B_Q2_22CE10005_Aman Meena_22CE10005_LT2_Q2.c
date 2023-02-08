
/*
Section 14

Roll No : 22CE10005

Name : #Aman Meena#

DESCRIPTION : Created a 2D array  dynamically using malloc.

LAB-TEST-2 */

	#include<stdio.h>
	#include<stdlib.h>

	int main()    {

	int i,j,M,N,arr[100][100],size,k,n;

	printf("Enter M: \n");          //Taking M as input
	scanf("%d",&M);

	printf("Enter N: \n");          //Taking N as input
	scanf("%d",&N);


	for(i=0;i<M;i++){
	    for(j=0;j<N;j++){
	        printf("Enter %d row element:",i);
		printf("Enter %d column element:", j);      //Inputing the array using for loop 
		scanf("%d%d",&arr[i][j]);

	int*arr=(int*)malloc(sizeof(int)*size);
	}
		}
	printf("Enter the value of n :\n");                         //Printing the input numbers using recursion .
	scanf("%d",&n);
		for(k=0;k<n;k++){
		   printf("Enter %d element :\n",k);
		   scanf("%d",&arr[k]);

	printf("arr[k]");
	}
		return 0;

		}
