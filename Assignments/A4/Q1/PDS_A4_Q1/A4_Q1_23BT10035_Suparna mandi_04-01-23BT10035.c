//NAME:SUPARNA MANDI
//ROLL NO:23BT10035

#include<stdio.h>
int main()
{
  int h,k,kp,hp;
  printf("Enter the no of kilometr travelled");
  scanf("%d",&k);
  printf("Enter the no of rental hour");
  scanf("%d",&h);
  if(k<=8)
    kp=20;
  else if(k<=12)
  kp=k*10;
  else if(k<=16)
    kp=k*8;
  else if(k<=20)
  kp=k*6;
  else
    kp=k*5;

  if(h<1)
    hp=0;
  else if (h<12)
    hp=200;
    else if(h<24)
      hp=300;
    else
      hp=300*(h/24);

  printf("Taxi total fare is :%d",kp+hp);
}
