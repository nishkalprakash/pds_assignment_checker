//lab 4
//name-vikash siyak
//roll no-23CE10085
#include<stdio.h>
int main()
{
  int a,b,d,rfare;
  printf("enter the travel distance in kilometer");
  scanf("%d",&a);
  printf("enter the hours of rental");
  scanf("%d",&b);
  if(b<1){
    rfare ==0;
  }
  if(b>=1 && b<12){
    rfare==200;
  }
  if(b>=12 && b<24){
    rfare==500;
  }
  if(b>=24){
    int c = rental/24;
    rfare == 500+c*300;
  }
  if(a<=8){
    d ==20;
  }
  if(a<=12 && a>8){
    d ==20+(a-8)*10;
  }
  if(a<=16 && a>12){
    d ==20+(a-12)*8;
}
if(a<=20 && a>16){
d==20+(a-16)*6;
}