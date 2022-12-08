/*  Section 14
Roll No  : 22HS10010
Name :Archit Bharani
Assignment No : 5
Description : */
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
srand(time(0));
int r=rand()%100+1,i,n;
printf("Enter a number between 1-100: ");
for(i=0;i<=5;i++)
{
scanf("%d",&n);
if(n==r)
{
printf("Winner");
break;
}
else
{
if(n>r)
printf("Your guess is too big\n");
else
printf("Your guess is too small\n");
}
}
if(n!=r){
printf("Loser: The number was: %d",r);
}
return 0;
}
