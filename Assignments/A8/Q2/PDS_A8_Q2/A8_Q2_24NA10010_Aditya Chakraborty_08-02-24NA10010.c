//To write the program to insert a number in the array and sorting
//Code Creator : Aditya Chakraborty
//Roll No : 24NA10010
#include <stdio.h>
int main (){
	int n ;
	printf ("What should be the size of the array?:");
	scanf ("%d",&n);
	for (int i=0;i<n;i++){
		int A[n];
		scanf ("%d", &A[i]);
	}
	for (int i =0;i<n-1;i++){
		for (int j =i +1;j<n;j++){
				
