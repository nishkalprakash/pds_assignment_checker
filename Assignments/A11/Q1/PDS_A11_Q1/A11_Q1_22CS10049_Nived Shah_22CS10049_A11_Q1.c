/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Assignment No. : 11
Description: Harmonic sum using recursion
*/
#include <stdio.h>
float S=0; //global variable to store sum
float sum(int i){
	if(i!=0){
		S=S+1.0/i; //calculating the sum
		sum(i-1);  //calling function again with parameter one less than previous parameter
	}
	return(S); //return sum when i becomes 0
}

int main(){
	int n; float s;
	printf("Enter the value of n to find sum of harmonic series upto n terms = ");
	scanf("%d", &n);
	s=sum(n);	//calling function to calculate sum
	printf("%0.3f\n", s);
	return 0;
}