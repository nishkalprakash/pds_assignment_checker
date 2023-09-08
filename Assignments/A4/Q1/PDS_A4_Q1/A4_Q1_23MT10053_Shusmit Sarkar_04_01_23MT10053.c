#include<stdio.h>
int main()
{
   int d,t;
   printf("Enter the distance in km ");
   scanf("%d",&d);
   printf("Enter the time in hours ");
   scanf("%d",&t);
   int f = 0;
   int F = 0;
   if(t<=1) f = f;
   if(t>1 && t<=12) f=f+200;
   if(t>12 && t<=24) f=f+500;
   if(t>=24) f = f+ 500 +  t/24 * 300;
   if(d<=8) F = F + 20;
   if(d>8 && d<=12) F = F + 20 + (d-8)*10;
   if(d>12 && d<=16)  F =F +60  + (d-12)*8;
   if(d>16 && d<=20) F =F + 92 + (d-16)*6;
   if(d>20) F = F + 116 + (d-20)*5;
   int fare = f + F;
   printf("The total fare is %d",fare);
   return 0;
}
