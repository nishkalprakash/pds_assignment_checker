#include<stdio.h>
#include<stdlib.h>     // header files
#include<time.h>


  int main(){
   srand(time(0));
   int r=rand()%100+1;
   int p;
   printf("guess random number between 1 to 100");  

   for(int j=1;j<=6;j++)
      {
        scanf("%d",&p);            //asking user input 5 times                
         if(j>5) 
                {
               printf("loser: the number was :%d",r); 
                }
          else if(p==r)
                {
                  printf("winner");
                }
          else if (p>r)
                   {
            printf("your guess is too big");
                  }
          else 
              {
              printf("your guess is too small");
             }
        }             
          return 0;
      }
