#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main()
{
int r, g, i = 1;
r= rand()%100+1;

printf("Enter your guess: ");
scanf("%d", &g);
if (g == r){ 
	printf("Winner \n");
	return 0;
}
	else if (g < r) printf("Your Guess is too small \n");
		else printf("Your Guess is too big \n");
while( g !=r || i !=5){
	printf("Enter your guess: ");
	scanf("%d", &g);
	if (g == r) {
	printf("Winner \n");
	return 0;
	}
	 if (g < r) printf("Your Guess is too small \n");
		else printf("Your Guess is too big \n");
	i = i +1;
	if ( i == 5) {
printf("Loser: The number was %d", r);
return 0;
}
	
}

//if ( i == 5) printf("Loser: The number was %d", r);



return 0;
}
