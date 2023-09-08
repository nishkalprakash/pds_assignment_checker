#include<stdio.h>
int main()
{
  int d,t,r,fare;
  printf("Enter the km travelled and hours the taxi was rented for :");
  scanf("%d%d",&d,&t);
  if(t<1)
    {
      if(d<=8)
 printf("taxi fare = 20");
      else if(d>8 && d<=12)
 {
   r=d-8;
   fare=20+r*10;
 printf("taxi fare = %d",fare);
 }
      else if(d>12 && d<=16)
 {
   r=d-12;
          fare =20+40+r*8;
          printf("taxi fare = %d",fare);
         }
       else if(d>16 && d<=20)
       {
          r=d-16;
          fare=20+40+32+r*6;
          printf("taxi fare = %d",fare);
          }
        else
       {
         r=d-20;
         fare=20+40+32+24+r*5;
         printf("taxi fare = %d",fare);
       }
 }
   else if (t)