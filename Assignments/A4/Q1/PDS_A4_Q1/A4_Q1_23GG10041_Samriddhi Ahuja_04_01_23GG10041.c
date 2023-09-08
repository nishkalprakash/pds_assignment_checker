//roll no.: 23GG10041
//NAME: samriddhi ahuja
#include <stdio.h>
int main()
{
  int   rental, fuel_charge, time,distance, days,sum;
printf("enter the distance  travelled=\n");
scanf("%d",&distance);
printf("enter the rental hours=\n");
scanf("%d",&time);
 days= time/24;
if (time<1)
  {rental=0;}
 else if(time>1&&time<12)
   {rental=200;}
 else if (time>12 && time<24)
   {rental =500;}
 else if (time>24)
   {rental=500+300*days;}
if (distance<=8)
  {fuel_charge=20;}
 if(distance>8&&distance<=12)
   {fuel_charge=(distance-8)*10 + 20;}
 if(distance>12&&distance<=16)
   {fuel_charge=(distance-12)*8 +60 ;}
if (distance>16&&distance<20)
  {fuel_charge= (distance-16)*6 +92;}
if (distance>20)
  {fuel_charge= (distance-20)*5+116 ;}
    
sum= rental + fuel_charge;
  printf("total fare of the taxi=%d\n",sum);
return 0;
}
