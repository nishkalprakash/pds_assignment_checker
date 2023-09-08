// roll no 23CS10011
// name vivek vardhan
#include<stdio.h>
int main(){
  int fare,x,j,k,rate;
  printf("enter number of kilometers travelled  and hours the taxi rented   ");
  scanf("%d%d",&x,&j);
  if (x<=8)
    rate =20;
  else if (x<=12)
    rate=20+(x-8)*10;
  else if (x<=16)
    rate=60+(x-12)*8;
  else if (x<=20)
    rate=92+(x-16)*6;
  else if (x>20)
    rate =106+(x-20)*5;
  if (j<1)
    rate+=0;
  else if (j>=1&&j<=12)
    rate+=200;
  else if (j>12&&j<=24)
    rate+=500;
  else if (j>24)
    rate+=500+((j/24)-1)*300;
  printf("\ntaxi fare = %d",rate);
  return 0;
}
      
      
