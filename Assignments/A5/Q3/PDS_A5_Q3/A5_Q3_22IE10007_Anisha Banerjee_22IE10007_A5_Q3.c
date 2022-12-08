/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 5
Program to make a guessing game
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int flag=0,x;
int guess(int a)
   {
          if (a==x)
            {
              printf("Winner.\n");
              flag=1;
            }
          else if(a>x)
              printf("Your guess is too big.\n");
          else if(a<x)
              printf("Your guess is too small.\n");
         
       return flag;
    }
int main()
  {
    srand(time(0));
    int i; 
    int g[5];
    x=rand()%100+1;
    printf("Enter the numbers you guessed.\n");
    for(i=0;i<5;i++)
         {
         scanf("%d", &g[i]);
         flag=guess(g[i]);
         if (flag==1)
           return 0; 
         }
    if(flag==0)
      printf("Loser:The Number was %d.\n",x);
    return 0;
   }
       
