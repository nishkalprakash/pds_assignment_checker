/*
name:Krithanya
sec:14
rollno.:22HS10030
assgnment no.:5
desc: guessing game
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
main()
{
srand(time(0));
int a,b,i=0;
a=rand();
while (a>100)
{
	a=a%100 +1;
	continue;
}

printf("guess the number");
scanf("%d",&b);
for (;i<4;i++)
{
	if (a==b)
	{
	printf(" WINNER correct guess");
	break;
	}
	else if (b>a)
	{
	printf("too big\n");
	printf("guess the number again\n");
	scanf("%d",&b);
	}
	else 
	{
	printf("too small\n");
	printf("guess the number again\n");
	scanf("%d",&b);
	}
	
}
printf(" LOSER the random no. is %d",a);

return 0;
}


