/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 5
Discription : A guessing game 
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(0));
	int r, g, a=1;
	r=rand()%100+1;
	
		while(g!=r){
		scanf("%d", &g);
		if(g>r){
		printf("your guess is too big.\n");
		}
		else if (g<r)
		printf("your guess is too small.\n");
		}
		printf("Winner.");
	return 0;
}


