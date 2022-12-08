#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Section 14
Roll No : 22NA30011
Name : Dipesh Goel
Assignment No : 5
Description : Guessing Game
*/

// int check_guess(int g)
// {
// 	if (r==g) return 1;
// 	else return 0;
// }
int main()

{
	int i=0,g,r;

	srand(time(0));
	r= rand()%100+1;


	while(i<5)
	{
		printf("Try %d, Enter your guess : ", i+1);
		scanf("%d",&g);

		if (r==g) 
		{
			printf("Winner");
			return 1;
		}
		else if (r>g) printf("Your guess is too small\n");
		else printf("Your guess is too big\n");
		i++;
	}

	printf("Loser: The number was %d",r);

return 0;

}