#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(0));
	int r= rand()%100 + 1;
	
	int count = 0;
	int i;	
	for(i=1;i<=5;i++)
	{
		printf("enter the number: ");
		int g;
		scanf("%d",&g);
		if(g==r)
		{
			printf("winner\n");
			break;
		}
		 if(g>r)
		{
			printf("your guess is too big\n");
			count++;
		}
		if(g<r)
		{
			printf("your guess is too small\n");
			count++;
		}
	}
	if (count==5)
	{
		printf("loser\n");
		printf("the number was %d",r);
	}
	return 0;
}

	
