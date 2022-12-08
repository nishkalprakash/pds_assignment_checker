/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 5

Description-Guessing Game
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{ 
srand(time(0));
int n,r=rand()%100+1;
for(int i=1;i<=5;i++)
{
scanf("%d",&n);
if(n==r)
{
printf("Winner\n");
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
if(n!=r)
printf("Loser. The number was %d",r);
return 0;
}
