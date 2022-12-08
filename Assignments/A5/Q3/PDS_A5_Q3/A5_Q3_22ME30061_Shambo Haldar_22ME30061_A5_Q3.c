/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 5
Description : Program to create a guessing game
*/

#include<stdio.h>
int main()
{
	int num,r,i;
	srand(time(0));
	r = rand()%100+1;
	for(i = 0;i < 5;i++){
		scanf("%d",&num);
		if(num > r)
			printf("Your guess is too big.\n");
		else if(num < r)
			printf("Your guess is too small.\n");
		else if(num == r){
			printf("Winner.");
			break;
		}
		
	}
	if(i >= 5)
		printf("Looser:The Number was %d",r);


	return 0;
}
