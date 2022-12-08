#include<stdio.h>
#include<stdlib.h>
#include<time.h>


  int main()
  { srand(time(0));
     int r= rand()%100+1;
      int g;
      
      printf(" guess number between 1 to 100");
      
      for(int i=1;i<=6;i++)
    { scanf(" %d", &g);
      if (i>5)
         { 
         printf("loser: the number was: %d",r);
         }else if (g==r){
               printf("winner");
                        }
                 else if(g>r){  
                printf(" your guess is too big");
                             }
             else{ 
             printf(" your guess is too small");
                 } 
      }
      
      return 0;
  }
