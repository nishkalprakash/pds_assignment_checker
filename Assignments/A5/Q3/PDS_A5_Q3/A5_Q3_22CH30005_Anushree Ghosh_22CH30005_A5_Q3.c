/*
SECTION 14
ROLL NO 22CH30005
NAME ANUSHREE GHOSH
assignment 5
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game(int a)
{
 return;
}

int main()
{
 int r,g,s;
 s=srand(time(0));
 r=rand()%100+1;
 printf("enter a number between 1:100");
 for(int i=0;i<5;i++)
{
 scanf("%d",&g);
 if(g==r)
{
printf("winner\n");

}
  else if(g>r)
{
printf("your guess is too big\n");
}
 else 
{
printf("your guess is too small");
}
}
}
 else
{
printf("loser: the number was:%d",r);
}


 


