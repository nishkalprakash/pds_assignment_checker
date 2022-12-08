/*roll no. 22ME10083
Assignment 5
sec 14*/
#include<stdio.h> 
#include<stdlib.h>
#include<time.h>


void main(){
	// Varriablen initialization
	srand(time(0));
	int r =rand()%100+1;
	int x,flag=0;
	// Taking inputs
	printf("Enter the number between 1 to 100(you have only 5 chance)\n");
	// Logic
	for(int i=1;i<=5;i++){
		scanf("%d",&x);
		if(x==r){
			printf("flag++\n");
			break;}
		else	if(x>r)
					printf("Your guess is too big \n");
				else
					printf("Your guess is too small\n");
		}
		// result
		if(flag==0)	
			printf("LOSER: The number is %d",r)	;
		else
			printf("WINNER");
		


	

}