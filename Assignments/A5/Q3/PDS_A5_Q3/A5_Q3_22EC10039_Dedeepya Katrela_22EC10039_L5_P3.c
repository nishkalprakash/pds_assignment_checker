//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:4
//DESCRIPTION:PROGRAM TO CHECK POINTS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{ srand(time(0));
  int r,num,count;
  r=rand()%100+1;
 for(count=1;count<=5;count++)
  {printf("enter your number between 1-100:");
   scanf("%d",&num);
   
   if(count<=4)
      {if(num==r)
        {printf("winner\n");
          break;}
       else if(num>r)
        {printf("your guess is too big\n");}
       else if(num<r)
        {printf("your guess is too small\n");}
       }
   if(count==5)
     {if(num==r)
       {printf("winner\n");}
      else if(num>r)
        {printf("your guess is too big\n");
         printf("Loser:The number was %d\n",r);}
      else if(num<r)
        {printf("your guess is too small\n");
         printf("Loser:The number was %d\n",r);}
     }
  }
return 0;
}
 
  
