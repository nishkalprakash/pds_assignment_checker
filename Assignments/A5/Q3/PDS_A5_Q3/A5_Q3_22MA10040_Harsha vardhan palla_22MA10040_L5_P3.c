/*Name:P.Sri Harsha Vardhan Roll no:22MA10040 assignment:5 assignment no:3 program:to guess a random number betweeen 1 and 100*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
srand(time(0));
int j,guess,i=0;
j=rand();
rand()%100+1;
printf("Enter a numberbetween 1_100\n");
while(i<5)
{
  scanf("%d",&guess);
}
if(guess==j)
{ printf("Winner\n");
break;
}
else if(guess>j)
printf("Your Guess is too big:\n");
else
{
printf("Your guess is too small:\n");
i++;}
if(i==5)
printf("looser: The number was %d\n",j);
}

