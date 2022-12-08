/*Name- KRISHNA GUPTA
  Roll n0. - 22GG10024
  Section - 14
  Assignment - 5
  Question - NUMBER GUESSING GAME
*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>      
int main()
{
  int i,r,g;
  r= rand()%100+1;              // GENERATING RAMDOM NUMBER
       for (i=1;i<=5;i++)      //LOOP FOR 5 TIMES TRIALS
         {
            printf("Enter number %d th time \n",i);
            scanf("%d",&g);
               if(r==g)
                 {
                   printf("winner");      // WINNER IF ENTERED NUMBER MATCHES THE RAMDOM NUMBER
                   break;
                  }
               else
                 {
                       if (g>r)
                       {

                          printf("Your guess is too big\n");     // IF ENTERED NUMBERE IS GREATER THAN RANDOM NUMBER
                        }
                       else 
                       {
                          printf("Your guess is too small\n");   // IF ENTERED NUMBERE IS GREATER THAN RANDOM NUMBER
                        }
                 }
          }
}
