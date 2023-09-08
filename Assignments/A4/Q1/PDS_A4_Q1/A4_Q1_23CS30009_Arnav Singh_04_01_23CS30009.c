//Role No.: 23CS30009
//Name: Arnav Singh

#include <stdio.h>

int main(){
  int fare, km, hrs, count=0;
  printf("Enter the number of kms travelled: ");
  scanf("%d", &km);
  printf("Enter the number of hrs the taxi was retained: ");
  scanf("%d", &hrs);
  //Finding part of fare due to number of hours
  if (hrs<=1) fare=0;
  else if (hrs>1 && hrs<=12) fare=200;
  else if (hrs>13 && hrs<=24) fare=500;
  else if (hrs>24){
    if (hrs%24==0) fare=500+300*(hrs/24 - 1);
    else fare = 500+300*(hrs/24);
  }
  //Finding part of fare due to number of km
  if (km<=8) fare+=20;
  else if (km>8 && km<=12) fare+=20+(km-8)*10;
  else if (km>12 && km<=16) fare+=20+40+(km-12)*8;
  else if (km>16 && km<=20) fare+=20+40+32+(km-16)*6;
  else if (km>20) fare+=20+40+32+24+(km-20)*5;
  printf("The taxi fare is %d.\n", fare);
  return 0;
}
