/*
Name:S.AKSHAY
Roll No: 24NA10062

LAB TEST 1
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//It is given that N,A,B should be constant
//hence macros are used
//also no value is given, so arbitrary value is chosen
#define N 10  
#define A 7
#define B 5

void main(){

	float Filter[N];
	int Bin_A[A],Bin_B[B];
	int x;
	srand(42);

	//Filling Filter 
	for(int i=0;i<N;i++){
		x = rand()%100+1;
		Filter[i]=0;
		for(int k=1;k<=x;k++){
			Filter[i]+=(float)((pow(-1,k+1)*k*k)/(2*k+1));
		}
		Filter[i]+=cos((float)x/2);
	}
	
	//Filling Bin_A & Bin_B
	int i_A=0,i_B=0;//index for A and B
	float y;//Temporarily holding the value before saving in A or B
	while(i_A<A && i_B<B){//loop until either A or B is filled
		x = rand()%100+1;
		y=0;
		
		//Compute y
		for(int k=1;k<=x;k++){
			y+=(float)((pow(-1,k+1)*k*k)/(2*k+1));
		}
		y+=cos((float)x/2);
		
		//if y > any value of Filter store x in Bin_A
		for(int j=0;j<N;j++){
			if(y > Filter[j]){
				Bin_A[i_A++]=x;//increment index afer adding
				break;}}
				
		//if y < any value of Filter store x in Bin_B
		for(int j=0;j<N;j++){
			if(y < Filter[j]){
				Bin_B[i_B++]=x;//increment index afer adding
				break;}}
		
	}
	//Display filter
	printf("Filter: %f",Filter[0]);
	for(int i=1;i<N;i++)printf(", %f",Filter[i]);
	printf("\n");
	
	//Display Bin_A
	if(i_A == 0)printf("Bin_A: Empty");
	else printf("Bin_A: %d",Bin_A[0]);
	for(int i=1;i<i_A;i++)printf(", %d",Bin_A[i]); 
	//We use i_A and not A because the loop may have broken if Bin_B
	//became full and Bin_A didn't, so after i_A-1 index, Bin_A
	//will have uninitialised (garbage values)
	printf("\n");
	
	//Display Bin_B
	if(i_B==0)printf("Bin_B: Empty");
	else printf("Bin_B: %d",Bin_B[0]);
	for(int i=1;i<i_B;i++)printf(", %d",Bin_B[i]); 
	//We use i_B and not B because the loop may have broken if Bin_A
	//became full and Bin_B didn't, so after i_B-1 index, Bin_B
	//will have uninitialised (garbage values)
	printf("\n");
	
}
