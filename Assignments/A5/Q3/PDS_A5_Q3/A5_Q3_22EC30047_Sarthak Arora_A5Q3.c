/* 
section 14
roll.no. = 22EC30047
name = SARTHAK ARORA
Assignment .no  : 5
description:  guessingh game 
*/ 




# include <stdio.h>
# include <stdlib.h>
# include <time.h>


int main()
{
	srand(time(0));
	int r= rand()%100+1;

	int i=0 ,n ;
	while(1){                                                                             //creating an infinte loop
		printf("guess a number: ");
		scanf("%d",&n); 
		if(n==r) {printf(" winner! ") ; break;} 
		else if (n>r) printf("your guess is too big\n \n" );                   
		else if (n<r) printf("your guess is too small\n \n");
		i++ ;
		if(i==5) { printf("Loser the number was %d",r);
			break;                                                                  // breaking the loop when number of trials are 5
			}
	}

	return 0;
}
