/*                                                      
NAME:: BONTHU MATTHEWS 
ROLL NUMBER:: 22PH10013 
ASSIGNMENT 5 
SECTION :: 14 
*/
 

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main ( )
{                                                                                                                                   
  srand(time(0));
  int a[5],i,d;
   int r=rand()%100+1;

for (i=1;i<=5;i++)
{
   printf("enter a number");
   scanf("%d",&a[i]);
   
   if (a[i]>r)
   {
   printf("guess is too big");
     if (i==5)
        {
         printf("looser no is %d",r);
        }
   }
   else if (a[i]<r)
   {
   printf("guess is too small");
      if(i==5)
       {
        printf("looser no is %d",r);
       }
   }
   else if (a[i]==r);
   {
   printf("winner");
   break;
   }
 }
return 0;
}

