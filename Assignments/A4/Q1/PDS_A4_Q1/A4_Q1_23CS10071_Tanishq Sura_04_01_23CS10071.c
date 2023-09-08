//tanishq sura
//23CS10071

#include<stdio.h>

int main(){
  int dist,hrs,rental=0,fare;
  printf("input the distance travelled in km and hours retained");
  scanf("%d%d",&dist,&hrs);
  if(dist<=8)
    fare=20;
  else if(dist<=12)
    fare=20+(dist-8)*10;
  else if(dist<=16)
    fare=20+40+(dist-12)*8;
  else if(dist<=20)
    fare=20+40+32+(dist-16)*6;
  else
    fare=20+40+32+24+(dist-20)*5;

  if(hrs<1);
  else if(hrs<=12)
    rental=200;
  else if(hrs<=24)
    rental=500;
  else
    rental=200+300*(hrs/12+1);

  printf("total cost= %d", fare+rental);
  return 0;
}
   
   
