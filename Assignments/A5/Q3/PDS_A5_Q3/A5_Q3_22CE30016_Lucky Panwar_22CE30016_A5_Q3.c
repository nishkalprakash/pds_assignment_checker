/* SECTION - 14
   NAME - LUCKY PANWAR
   ROLL NO. - 22CE30016
   ASSIGNMENT - 5
   DESCRIPTION -  */

#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
  
 int main()
{
  int g,r,t;
  srand(time(0));
  r = rand()%100+1;
  printf("Guess a number between 1-100\n");
  scanf("%d",&g);
  t = 0;
  if(g==r){ printf("WINNER\n");}

  while(g!=r && t<4){
 	            if(g==r){ printf("WINNER\n");}

                    if(g>r){
                      printf("Your guess is too big!\n");
                             }
                    else{
                     printf("Your guess is too small!\n");
                          }
                     printf("Guess a number again between 1-100\n");
                     scanf("%d",&g);  
                     t++; 
         
                  }

    if(t==4){
       printf("Loser: The number was %d\n",r);
          }
  return 0 ;
}
