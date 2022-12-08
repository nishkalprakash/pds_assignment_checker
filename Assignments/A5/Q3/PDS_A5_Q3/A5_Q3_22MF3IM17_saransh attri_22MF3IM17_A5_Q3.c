#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
srand(time(0));
int num;
int r=rand()%100+1;
printf("%d",r);
int i=1;

while (i<=5)
{
printf("write the number\n");
scanf("%d",&num);
if(num<r)
	printf("your guess is too small\n");

else if(num>r)
	printf("your guess is too big\n");

else if(num==r)
{
	printf("winner\n");
	break;
}
i++;
}

if(i==6)
	printf("loser the number was %d\n",r);
return 0;

}
