//Roll No.:23ME10082
//Name:Siddharth Behera
#include<stdio.h>

int main()
{
  int km,hrs,t=0;
  int fare=0,tfare=0,total=0;
  printf("enter the total number of kilometer:");
  scanf("%d",&km);
  printf("enter the total number of hour:");
  scanf("%d",&hrs);
  if (km<=8){fare=20;}
  else if (km<=12){fare=20+10*(km-8);}
  else if(km<=16){fare=60+8*(km-12);}
  else if(km<=20){fare=92+6*(km-16);}
  else if(km>20){fare=116+5*(km-20);}

 if(hrs!=0){
  if(hrs<=12){tfare=200;}
  else if(hrs<=24){tfare=500;}
  else {if(hrs%24==0){t=(hrs-24)/24;tfare=500+(t*300);}
  else{t=(hrs-24)/24;tfare=500+((t+1)*300);}}
 }
  total=tfare+fare;
 

//printf("%d\n",fare)
//printf("%d\n",tfare);
  printf("total fare=%d\n",total);

return 0;
}
  
  
  
