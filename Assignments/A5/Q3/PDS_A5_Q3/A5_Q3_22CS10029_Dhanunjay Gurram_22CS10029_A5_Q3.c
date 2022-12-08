/*Section 14
  Name:Gurram Dhanunjay
  RollNo:22CS10029
  Assignment:5
  Description:Finding sum of given series using functions*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
   srand(time(0));
   int r,guess,i=0;
   r=rand()%100+1;                              //Assigning random value b/w 1-100 for r
   printf("Enter a number between 1-100:\n");
   while (i<5){
     scanf("%d",&guess);
     if (guess==r) {printf("Winner\n"); break;}
     else if (guess>r) printf("Your guess is too big!\n");
     else printf("Your guess is too small!\n");
     i++; }
   if (i==5) printf("Loser: The number was %d\n",r);
   return 0;
}
     
