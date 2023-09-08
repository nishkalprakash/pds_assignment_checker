//roll no:23EC10066
//NAME : Ramaraju sai Pranav Murari
#include<stdio.h>
int main(){
  int km,hrs;
  int sum1,sum2,rental;
  printf("enter the no of kms and hours : ");
  scanf("%d%d",&km,&hrs);
  if(km<8){
    sum1= 20;
  }
  else if(8<km<12){
    sum1=20+ 10*(hrs-8);
  }
  else if(12<km<16){
    sum1=60 + 8*(hrs-12);
  }
  else if (16<km<20){
    sum1=92 + 6*(hrs-16);
  }
  else {
    sum1=116 + 5*(hrs-20);
  }

  if(hrs<1){
    sum2 = 0;
  }
  else if(1<=hrs<12){
    sum2=200;
  }
  else if (12<=hrs<24){
    sum2=sum2 +300;
  }
  else {
    sum2 =sum2 +300;
  }
  
  rental = sum2+sum1;
  printf("the taxi fare is : %d",rental);
  return 0;
}
