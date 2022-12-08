#include<stdio.h>
#include<stdlib.h>
#include<time.h>

 int main()
{
     srand(time(0));
     int num+rand()%100+1,check=0;
     for(int i=0;<s;i++)
{
     int guess:
     scantf("%d,&guess);
     if(guess>num)printf("your guess is too big")
     else if(gue<num)printf("your guess is too small")
     else {
     printf("winner");
     break;
     }
     }
     if(check=1)printf("loser:the number was %d ",num);

  return 0;
}
