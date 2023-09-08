//name: PILLI ASISH CHANDAN
//R:NO: 23ME30039

#include<math.h>
#include<stdio.h>

int main() {
  int d,t;
  int a,b; //a is for cost of fuel and b is for cost of rent
  printf("please enter total distance in km and time required in h");
  scanf("%d %d", &d , &t );
  if(d<=8){
    a=d*20;
  }
  if(d>8 && d<=12) {
    a=8*20+(d-8)*10;
  }
  if(d>12 && d<=16) {
    a=8*20+4*10+(d-12)*8;
  }
  if(d>16 && d<=20) {
    a=8*20+4*10+4*8+(d-16)*6;
  }
  if(d>20) {
    a=8*20+4*10+4*8+4*6+(d-20)*5;
  }

  if(t<1) {
    b=0;
  }
  if(1<=t && t<12) {
    b=200;
  }
  if(t>=12 && t<24) {
    b=500;
  }
  if(t>24) {
    b=500+(t/24)*800;
  }
  printf("total fare is %d", (a+b) );
  return(0);
}
  
