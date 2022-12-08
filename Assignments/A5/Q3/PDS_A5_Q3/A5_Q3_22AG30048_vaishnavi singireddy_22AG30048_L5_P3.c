#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()

{
srand(time(0));
int g,r,i;
printf("guess a random number between(1-100)");

r=1+(rand()%100 );
for(i=1;i<=5;i++)
{
scanf("%d",&g);
if(r==g)
{
printf("winner\n");
break;
}

else if(g>r)
{
printf ("your guess is too big\n");
}
else
{
printf("your guess is too small\n");
}
if(i==5)
{
printf("loser:the number was:%d\n",r);
}
}
return 0;
}




































