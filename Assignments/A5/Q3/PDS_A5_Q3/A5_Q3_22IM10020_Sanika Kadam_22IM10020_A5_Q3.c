//Assignment 5
//Section 14
//Name:Sanika Kadam
//Question 3


//guessing game


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
srand(time(0));
int r,g;

r=rand()%100=1;
print("%d\n",r);

for(int i=1;i<=5;i++)
{
 printf("Enter any number"); //enter number between 1 to 100
 scanf("%d",g);
 {
  if(r==g) 
   {
    printf("Winner\n");
   }
  else if(r<g)
   {
    printf("your number is too big\n");
   }
  else if(r>g)
   {
     printf("your number is too small\n");
   }
  else 
   {
     printf("Loser");
  }
}




