#include<stdio.h>

int main(){
  int x,y;
  int a,b;
  printf("enter the amount of kilometers travelled \n");
  scanf("%d",&x);
  printf("enter the time of rentel in hours  \n");
  scanf("%d",&y);
  if(y<1)y=0;
  else if(y>=1&&y<12)a=200;
  else if(y>=12&&y<24)a=500;
  else if(y>24){
    int z = y/24;
    a=500+z*300;
  }
  if(x<=8)b=20;
  else if(x>8&&x<=12)b=20+(x-8)*10;
  else if(x>12&&x<=16)b=20+40+(x-12)*8;
  else if(x>16&&x<=20)b=20+40+32+(x-16)*6;
  else b=20+40+32+24+(x-20)*5;

  printf("the payable amount is %d \n",a+b);
  
  return 0;
}
