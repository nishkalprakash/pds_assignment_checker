#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main()
{

int r, g, i=0;
r= rand()%100+1;

printf("enter your guess: ");
scanf("%d", &g);
if (g == r){
	 printf("WINNER \n");
	 return 0;
} 
	else if ( g < r) printf("your guess is too small \n");
	
           else printf(" Your guess is too big \n");
while( g != r || i !=5){
	printf("enter your guess: ");
	scanf("%d", &g);
	if (g == r ){
	printf("WINNER \n");
	return 0;
	}
	if ( g<r) printf("your guess is too small \n");
		else printf("your guess is too big \n");
	i = i + 1;
	if ( i == 5)  {
printf(" loser: the number was %d", r);
	return 0;
}
}
return 0;
}
