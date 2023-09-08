//Name : Sourendra Nandi
//Roll no : 23CH10066
#include <stdio.h>
int main()
{
  int km,hrs,fare,fare_km,fare_hrs,days,rem;
  printf("Enter kms and hrs: ");
  scanf("%d%d",&km,&hrs);
 
  if (hrs<1)
    {
      fare_hrs=0;
    }
  else if(hrs>=1 && hrs<12)
    {
      fare_hrs=200;
    }
  else if(hrs>=12 && hrs<24)
    {
      fare_hrs=200+300;
    }
  else if(hrs>=24)
    {
      days=hrs/24;
      fare_hrs=500+days*300;
    }
  if (km<=8) fare_km=20;
  else if(km>8 && km<=12) fare_km=20+(km-8)*10;
  else if(km>12 && km<=16) fare_km=20+40+(km-12)*8;
  else if(km>16 && km<=20) fare_km=20+40+32+(km-16)*6;
  else if(km>20) fare_km=20+40+32+24+(km-20)*5;
  fare=fare_km+fare_hrs;
  printf("Fare for km = %d, Fare for hrs=%d\n",fare_km, fare_hrs);
  printf("Total Fare= %d\n",fare);
  return 0;
}
    
  
  
  
    
      
  
    
