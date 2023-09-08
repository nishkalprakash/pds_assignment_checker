//ROLL 23EX10024
//NAME NISHANT KUMAR
#include<stdio.h>
#include<stdlib.h>
int main(){
  int sum=0, i,x,y,min=100;
  for(i=0;i<20;i++){
    printf("The numbers are %d\n", x=5000+rand()%1001);
    y=x;
    while(x!=0){
    sum = sum + x%10;
    x = x/10;
    } 
  printf("The sum of digit %d\n", sum);
  while(sum<min){
    min=sum;
  }
  sum=0;
  }
  printf("The min of the sum of digits is %d", min);
  
  
  
  return 0;
}
