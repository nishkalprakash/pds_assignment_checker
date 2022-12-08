/*
SECTION 14
ROLL no. :22BT30022
name:Rahul choudhary
assignment:5
Description:program to guess a random number between 1-100 in 5 or less tries.
*/
#include<stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
srand(time(0));
int n, r=rand()%100+1;

for (int i=1;i<=5;i++)
{
scanf("%d",&n);
printf("\n");
if(n==r)
{
printf("you win");
break;
}
else if (n>r)
{
printf("number is too big");
}
else if(n<r)
{
printf("number is too small");
}
}
if (n!=r)
printf("you lose,the no. was %d",r);
return 0;
}

 

