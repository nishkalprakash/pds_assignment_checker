// Swarup Jayaram Dhanavade
// 23MI10052

#include<stdio.h>

int main()
{
  int km , hr ,mk,mt;
  printf("Enter Distance and Time (keeping space between values ) :");
  scanf("%d %d",&km , &hr);

  if(km<=8) mk=20;
  if(km>8 && km <=12) mk= 20 + (km-8)*10;
  if(km>12 && km <=16) mk= 20 + 40 + (km-12)*8;
  if(km>16 && km<=20) mk= 60+32+ (km-16)*6;
  if(km>20) mk= 92+24+(km-20)*5;

  if(hr<1)mt=0;
  if(hr>=1 && hr<12) mt=200;
  if(hr>=12 && hr <24) mt=500;
  if(hr==24 ) mt= 800;
  if(hr>24 ) mt=500 + (((hr-24)/24)+1)*300;

  printf(" Taxi Fare is :%d",mk+mt) ;
  return 0;
}
