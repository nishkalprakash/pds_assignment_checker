#include<stdio.h>
//Function for sorting array
	void sort(int A[],int n){
	int t;
	for(int i=0;i<n;i++){
	for(int j=0;j<n-i-1;j++){
	if(A[j]>A[j+1]){
	t=A[j];
	A[j]=A[j+1];
	A[j+1]=t;}}}}
	int main()
{	
	int n,A[100];
// Read array size
	scanf("%d",&n);
// Read array
	for(int i=0;i<n;i++){
	scanf("%d",&A[i]);
	}
// Sorting Array
	sort(A,n);
// Printing modified array
	printf("A[%d] = ",n);
	for(int i=0;i<n;i++){
	printf("%d",A[i]);
	}
	printf(" ]");
// Printing Largest number formed by the element
	printf("Largest = ");
	for (int i=0;i<n;i++){
	printf("%d",A[i]);}
	return 0;
	}
		
