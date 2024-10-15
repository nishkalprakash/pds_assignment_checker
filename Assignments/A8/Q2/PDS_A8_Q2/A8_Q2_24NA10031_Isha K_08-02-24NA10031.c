#include<stdio.h>
// Function for sorting array
	void bs(int A[],int n){
	int k;
	for(int i=0;i<n;i++)
{	for(int j=0;j<n-i-1;j++)
	{if (A[j]>A[j+1]){
	k=A[j+1];
	A[j+1]=A[j];
	A[j]=k;}}}}
	int main()
{	
	int A[101],n,m;
// Read size of input array
	printf("n = ");
	scanf("%d",&n);
// Input array
	for(int i=0; i<n; i++){
	scanf("%d",&A[i]);}
//Sorting array
	bs(A,n);
	
// Read m
	printf("m = ");
	scanf("%d",&m);
// Inserting m in array
	A[n]=m;
// Sorting array with m
	bs(A,n+1);
// Printing the final sorted array
	printf("Output Array = ");
	for(int i=0; i<n; i++){
	printf("%ls ",&A[i]);
	}
	return 0;
	}
	
	
	
