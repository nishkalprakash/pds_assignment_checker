/*
Section 14
Roll no. - 22MT10042
Name- Rathin Ghosh
Assignment no. - 5
Description- A guessing game.
*/ 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int c=1,g,r,i;
r=rand()%100+1;
srand(time(0));
printf("Enter a number between 1-100 : ");
scanf("%d",&g);
for(i=1;i<5;i++)
{
if (g==r)
{
printf("Winner");
break;
}
else
{
if (g>r)
{
++c;
printf("Your guess is too big\n");
scanf("%d",&g);
}
else
{
++c;
printf("Your guess is too small");
scanf("%d",&g);
}
}
}
if (c==5)
printf("Loser. The number was %d",r);
return 0;
}
