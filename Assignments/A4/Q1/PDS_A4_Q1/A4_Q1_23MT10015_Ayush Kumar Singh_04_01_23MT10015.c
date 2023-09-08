//NAME : AYUSH KUAMR SINGH
//Roll no.23MT10015

#include <stdio.h>
#include <math.h>

int main(){
  int dist, hour;
  printf("Enter distance: ");
  scanf("%d", &dist);
  printf("Enter hours: ");
  scanf("%d", &hour);

  int sum2=0;
  if(dist<8){
    sum2 = 20;
  }else if(8<dist<=12){
    sum2=20+(dist-8)*10;
  }else if(12<dist<=16){
    sum2=20+(dist-8)*10+(dist-12)*8;
  }else if(16<dist<=20){
    sum2=20+(dist-8)*10+(dist-12)*8+(dist-16)*6;
  }else if(dist>20){
    sum2=20+(dist-8)*10+(dist-12)*8+(dist-16)*6+(dist-20)*5;
  }

  int sum=0;
  if(hour<1){
    sum = 0;
  }else if(1<=hour && hour<=12){
    sum = 200;
  }else if(12<hour && hour <=24){
    sum = 500;
  }else if(hour>24 && hour%24!=0){
    sum = 500+(hour/24)*300;
  }else if(hour > 24 && hour%24==0){
    sum = 2500+((hour/24)-1)*300;
  }
  printf("Total amount= %d", sum+sum2);
  return 0;
}
