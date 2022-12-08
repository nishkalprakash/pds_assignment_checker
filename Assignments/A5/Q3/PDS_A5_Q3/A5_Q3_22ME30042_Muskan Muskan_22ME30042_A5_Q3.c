/*
* Section 14
* Roll No : 22ME30042
* Name : Muskan
* Assignment No : 5
* Description : Guessing game*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
srand(time(0));
int r,g,i;

r=rand()%(100)+1;
printf("%d\n",r);
{
for(i=1;i<=5;i++)
{
printf("guess a number between 1-100\n");
scanf("%d",&g);
{
if(r==g)
{
printf("Winner\n");
}
else if(g>r)
{
printf("Your guess is too big\n");
}
else
{
printf("Your guess is too small\n");
}
}
}
}
printf("Loser: The number was %d\n",r);

return 0;
}




