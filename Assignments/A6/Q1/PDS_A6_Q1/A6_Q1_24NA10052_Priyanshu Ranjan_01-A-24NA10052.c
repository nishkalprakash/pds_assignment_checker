#include <stdio.h>
//importing all the libraries...
//math library
#include <math.h>
//std library
#include <stdlib.h>
//time libraray for random
#include <time.h>
//creating main function
int main(){
	// initialising the arrays 
	float Filter[10];
	int Bin_A[10], Bin_B[10];
	//initialising the variables
	float x,y;
	//first loop for y calculation and random
	for (int i=0;i<10;i++){
	//code of random value 
		int randomNumber = rand() % 100+1;
		x = randomNumber;
		for (int k=0;k<x;k++){
			y= ((pow(-1,k+1))*k*k)/((2*k) +1);
			}
		// for calculation of cos x/2
		float a = (x*3.14)/360;
		y += cos(x/2);
		//importing in filter array
		Filter[i] =y;
		
			
		
	//for bin_a and bin_b array	
	}
	for (int i=0;i<10;i++){
	//creating again randoms 
		int randomNumber = rand() % 100+1;
		
		x = randomNumber;
		//calculation of y value 
		for (int k=0;k<x;k++){
			y= ((pow(-1,k+1))*k*k)/(2*k +1);
			}
		float a = (x*3.14)/360;
		y += cos(x/2);
		//creating twoo flag values for counting greater or less than
		int z =0,l=0;
		//checking the values which are greater than filter values
		for (int j=0;j<10;j++){
			if (y>Filter[j]){
				z+=1;}}
		//checking the values which are smaller than filters values
		for (int h=0;h<10;h++){
			if (y<Filter[h]){
				l+=1;}}
		//converting the float to int for bina and binb 
		int q =y;
		//importing values in bina and bin b
		//checking the condition..
		if (z>0){
			Bin_A[i]= q;}
		if (l>0){
			Bin_B[i]=q;}
		}
	// displaying the values of array filter
	printf("\nthe value of Array Filter is :  ");		
	for (int j=0;j<10;j++){	
		printf(" %f",Filter[j]);}
	printf("\n The value of Array Bin_A is :  ");
	// displayingthe values of Bin A
	for (int j=0;j<10;j++){	
		printf(" %d",Bin_A[j]);}
	// displaying the values of bin B
	printf("\n The value of Array Bin_B is :  ");
	for (int j=0;j<10;j++){	
		printf(" %d",Bin_B[j]);}
		
	//code completed :)
	return 0;
		
}
