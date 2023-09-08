//lab 4
//name-vikash siyak
//roll no-23CE10085
#include<stdio.h>
int main(){
  int b,d,e,f;
  while(1){
    printf("enter a single digit number");
    scanf("%1d",&b);
    if(b<0){
      return 0;
    }
    if(b==5){
      printf("enter a  single  digit number1");
      scanf("%1d",&d);
      if(d==1){
    printf("enter a single digit number2");
    scanf("%1d",&e);
    printf("enter a single digit number3");
    scanf("%1d",&f);
    if(e==7){
      printf("pattern has been found");

      return 0;
    }
    else{continue;}
      }
    }