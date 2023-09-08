#include<stdio.h>
#include<stdlib.h>
int main(){
  int i;
  int x;
  int z;
  int summin=6000;
  int sum;
  for(i=1;i<=20;i++){
    sum = 0;
    x=rand()%1000;
    x=x+5000;
    
    printf("%d ",x);
     for(int j =1;j<5;j++){
      z=x%10;
      sum = sum+z;
      x=x/10;
    }
     printf("sum of digits %d\n",sum);
    if(sum<summin) summin=sum;
    
  }
  printf("minimum of sum of digits  is %d \n",summin);
  return 0;
}
