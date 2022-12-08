/*
section 14
roll no.: 22AE30007
name: Devanshi Dadoo
Assigment 5
desciption: GUESSING GAME
*/



#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
 int r, g;
 r=rand()%100+1;
 printf("Guess a number between 1-100");
 for(int i=0; i<5; i++)
 {
  scanf("%d", &g);
  if(g==r)
  {
   printf("WINNER\n");
   return;
  }
  if(g>r)
  {
   printf("your guess is too big\n");
  }
  else
  {
   printf("your guess is too less\n");
  }
 }
 printf("LOOSER: THE NUMBER WAS %d\n", r);
}
 




