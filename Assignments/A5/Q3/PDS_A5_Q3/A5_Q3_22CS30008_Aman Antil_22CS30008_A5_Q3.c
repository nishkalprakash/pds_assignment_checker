/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 5
Description : Program of a game to guess random no.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(0));
	int r=rand()%100+1;
	int n=1;
	int A[5];
	for(int i=0; i<5; i++){
		printf("Enter number : "); 
		scanf("%d", &A[i]);
		if(A[i]==r){	
			printf("Winner\n");
			break;	
		} 
		if(A[i]>r){
			printf("Your guess is too big.\n");
			if(i==4) printf("Loser: The number was %d", r);
		}
		if(A[i]<r){
			printf("Your guess is too small.\n");
			if(i==4) printf("Loser: The number was %d", r);
		}
	}
	return 0;
}