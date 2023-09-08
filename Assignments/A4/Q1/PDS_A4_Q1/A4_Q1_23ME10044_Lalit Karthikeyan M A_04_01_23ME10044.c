//Roll NO.: 23ME10044
//Name: Lalit Karthikeyan M A

#include<stdio.h>

int main(){

  int fare, taxifare, totalfare,a;
  int km, hr;

  printf("Enter the kilometers travelled: \n");
  scanf("%d", &km);

  printf("Enter the hours the taxi was retained: \n");
  scanf("%d", &hr);

  if(km>0 && km<=8)fare=20;
  if(km>8 && km<=12)fare=20+(km-8)*10;
  if(km>12 && km<=16)fare=60+(km-12)*8;
  if(km>16 && km<=20)fare=92+(km-16)*6;
  if(km>20)fare=116+(km-20)*5;

  if(hr>0 && hr<=1)taxifare=0;
  if(hr>1 && hr<=12) taxifare=200;
  if(hr>12 && hr<=24) taxifare=500;
  
  if(hr>24){
    if(hr%24!=0){
      a=(hr-24)/24;
      taxifare=500+(a*300);
    }
    else{
      a=((hr-24)/24)-1;
      taxifare=500+(a*300);
    }
  }

  totalfare=taxifare+fare;
  printf("The total fare is: %d\n",totalfare);

  return 0;
}
  
  

  
    

    
  

  
