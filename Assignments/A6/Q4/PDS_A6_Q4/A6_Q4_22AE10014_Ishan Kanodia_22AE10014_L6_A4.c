/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Assignment No. : 3
Description : Building sets and computing various operations
*/

#include<stdio.h>
int*ptra;
int*ptrb;
int BuildSet(int n,int A[n]){
	printf("Enter n numbers : ");
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
}





int main(){
	int m,n;
	int A[m];
	int B[n];
	BuildSet(A,m);
	BuildSet(B,n);
	ptra=&A[0];
	ptrb=&B[0];
	printf("Press ‘1’ to perform search in Set A\n Press ‘2’ to perform search in Set B\nPress ‘3’ to perform Union of Set A and Set B\nPress ‘4’ to perform Intersection of Set A and Set B\n Press ‘5’ to perform Difference of Set A and Set B\nPress any other key to quit\n");
	int n=0;
	while(n>=0&&n<=5){
		printf("Enter n : ");
		scanf("%d",&n);		
	}
return 0;
}

