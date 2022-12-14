/*
Name           :Admya Maheshwari
Roll no.       : 22CH10004
Section        : 14
Lab test no.   :1
Discription    :A c program to print the perfect no. less than the no. entered 

*/

#include<stdio.h>

int perfect_no(int N){
	int sum =0;
	for (int i =1;i,N;i++){
				if(N%i==0){
					    sum+=i;
						   }
				}
		if(sum ==N){
			     return N; }


		else { 	
			return -1; }  


}

int main(){
	int N;
	printf("enter a number :");
	scanf("%d",&N);
	for(int i =1;i<N;i++){
				int admya= perfect_no(i);
					         }


	
	
	return 0;
}
