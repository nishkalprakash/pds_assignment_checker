/*
 *Sec           : 14
 *Name          : Tejasree Sai
 *Roll no       : 22CS10009
 *Assignment no : 5
 *Description   : Guessing game
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{
  srand(time(0));
  int r,i,a[5];
  r= rand()%100+1;                   // a random num is chosen
 
  for(i=0;i<5;i++)
  {
    printf("Guess a number :\n");
    scanf("%d",&a[i]);
    printf("%d",a[i]);
   
    if(a[i]==r)
    { 
      printf("Winner\n");
      break;                          // break gets it out of loop
      
    }
    else if (a[i]>r)
    {
      printf("Your number is too big\n");
    }
    else 
    {
      printf("Your number is too small\n");
    }
    if (i==4)
      printf("Looser : The number is %d\n",r);
  }

 return 0;
}
