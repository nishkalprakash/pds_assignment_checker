/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment no:5
Description: Program to create a guessing game
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(0));
	int r;
	int g[5];
	r=rand()%100+1;
	int i;
	int flag=0;
	//Variables declared
	for(i=0;i<5;i++){
		//Loop to take in inputs and print outputs
		scanf("%d",&g[i]);
		if(g[i]==r)
		{
			printf("Winner\n");
			flag=1;
			break;
		}//output if guess is correct
		else if(g[i]>r){
			printf("Your guess is too big!");
		}//output if guess is greater than the answer
		else if(g[i]<r){
			printf("Your guess is too small!");
		}//output if guess is smaller than the answer

	}
	if(flag==0){
		printf("Loaser! the number was %i",r);
	}// output if none of the guesses were correct
	return 0;
}