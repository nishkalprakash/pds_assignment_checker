//Assignment 9
//Section 14
//Name:Sanika Kadam
//Question 4

#include<stdio.h>

typedef struct{
               int D;
               int M;
               int Y;
              }date;

//Function to read and print date from keyboard

date readdate(date P)
{
  printf("Enter date in format dd/mm/yyyy: ");
  scanf("%d %d %d",&P.D,&P.M,&P.Y);
  printf("Date: %d/%d/%d\n",P.D,P.M,P.Y);
}


//Function to find days

void finddays(date D1,date D2)
{
  int days;
  if(((D1.D)<=(D2.D))&&((D1.M)<=(D2.M))&&((D1.Y)<=(D2.Y)))
    {
     days=((D2.D)-(D1.D))+(31*((D2.M)-(D1.M)))+(365*((D2.Y)-(D1.Y)));
    }
   printf("Days:%d\n",days);
}
  
     

int main()
{
  date D1,D2;
  readdate(D1);
  readdate(D2);
  finddays(D1,D2);
  
  return 0;
}
  
