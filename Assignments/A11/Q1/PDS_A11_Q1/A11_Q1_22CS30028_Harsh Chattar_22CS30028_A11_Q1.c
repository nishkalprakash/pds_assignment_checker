/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 11
Description :  print harmonic sum upto n terms
*/


#include <stdio.h>
#include <stdlib.h>

float harmonic_Sum(int n){  //function to make calculate harmonic sum
	if(n!=1){
		 return 1.0/n + harmonic_Sum(n-1);
	}
	else return 1;

}

int main(){
	int n;
	printf("Enter no. of terms : ");
	scanf("%d",&n);
	float sum;
	sum=harmonic_Sum(n);
	printf("The sum of harmonic series upto %d terms is %f",n,sum);



return 0;
}

