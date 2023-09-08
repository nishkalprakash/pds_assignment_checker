//Roll No:23EE30017
//name:Ranga Kiranmai
#include <stdio.h>
int main()
{
  int km,hrs;
  printf("Enter the number of km travelled:");
  scanf("%d", &km);
  printf("Enter the number of hrs travelled:");
  scanf("%d", &hrs);
  if(hrs<1) printf("no rental");
  else if(hrs>=1 && hrs <12) printf("rental=200\n");
  else if(hrs>=12 && hrs>24) printf("rental=200+300\n");
  else if(hrs>=24) printf("rental=200+300+300\n");
  if(km<=8) printf("taxi fare=20\n");
  else if(km>8 && km<=12) printf("taxi fare=%d",20+(km-8)*10);
  else if(km>12 && km<=16) printf("taxi fare=%d",60+(km-12)*8);
  else if(km>16 && km<=20) printf("taxi fare=%d",92+(km-16)*6);
  else if(km>20) printf("taxi fare=%d",116+(km-20)*5);
  return 0;
}
